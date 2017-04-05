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
const int MAXM = 1e6+5;
const int MAXN = 1e6+4;

int a[MAXM],dp[MAXM];

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	dp[n] = n+1;
	for(i=n-1;i>=1;i--){
		if(a[i]==a[i+1]){
			dp[i] = dp[i+1];
		}else{
			dp[i] = i+1;
		}
	}
	for(i=1;i<=m;i++){
		int l,r,x;
		scan(l);scan(r);scan(x);
		if(a[l]!=x){
			printf("%d\n",l);
		}else{
			if(dp[l]>r){
				printf("-1\n");
			}else{
				printf("%d\n",dp[l]);
			}
		}
	}
	return 0;
}