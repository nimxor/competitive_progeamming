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

int a[MAXM],dp[MAXM],k,par;

int main()
{
	int n,m,i,j;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		scan(a[i]);
		dp[i]=a[i]+dp[i-1];
	}
	j=1;
	int l=1,r=-1,Ans=-1;
	for(i=1;i<=n;i++){
		while(j-i+1-dp[j]+dp[i-1]<=k){
			j++;
		}
		j-=1;
		if(j-i+1-dp[j]+dp[i-1]<=k){
			if(Ans<j-i+1){
				Ans = j-i+1;
				l = i;
				r = j;
			}
		}
	}
	cout<<Ans<<endl;
	for(i=l;i<=r;i++){
		a[i]=1;
	}
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}