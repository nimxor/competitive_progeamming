#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define all(x) x.begin(),x.end()
#define se second
#define fi first
#define pi 3.14159265358979323
 
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 3e5+1;
const int MAXN = 1e4+4;

int a[MAXM],par[MAXM],dp[MAXM];

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scan(a[i]);
		par[a[i]]=i;
	}
	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		x = par[x];
		y = par[y];
		if(x>y)	swap(x,y);
		dp[y] = max(x,dp[y]);
	}
	ll Ans=0;
	for(i=1;i<=n;i++){
		dp[i]=max(dp[i],dp[i-1]);
		Ans += i-dp[i];
	}
	cout<<Ans<<endl;
	return 0;
}