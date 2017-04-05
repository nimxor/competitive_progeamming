#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
// #define mod 1000000007
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
const int MAXM = 5e2+1;
const int MAXN = 1e4+4;

ll mod;
ll a[MAXM],dp[2][MAXM][MAXM];

// int solve(ll n,ll m,ll b)
// {
// 	if(m==0 and b>=0)	return 1;
// 	if(n==0 or m==0 or b<0)	return 0;
// 	if(dp[n][m][b]!=-1)	return dp[n][m][b];
// 	ll ret = 0;
// 	ret += solve(n,m-1,b-a[n]);
// 	if(ret>=mod)	ret%=mod;
// 	ret += solve(n-1,m,b);
// 	if(ret>=mod)	ret%=mod;
// 	dp[n][m][b] = ret;
// 	return ret;
// }

int main()
{
	ll n,m,b,i,j,k;
	cin>>n>>m>>b>>mod;
	
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}

	// Note : this bottom up is build up using the above topdown approach
	// See that the base conditions are fully satisfied and the base condition does not contain nth term hence we can remove it

	for(i=0;i<=b;i++)
		dp[0][0][i]=1;

	for(i=1;i<=n;i++){
		for(j=0;j<=m;j++){
			for(k=0;k<=b;k++){
				dp[i&1][j][k] = dp[(i-1)&1][j][k];
				if(dp[i&1][j][k]>=mod)	dp[i&1][j][k]%=mod;
				if(k>=a[i] and j>0){
					dp[i&1][j][k] += dp[i&1][j-1][k-a[i]]; 
					if(dp[i&1][j][k]>=mod)	dp[i&1][j][k]%=mod;
				}
			}
		}
	}

	ll Ans=dp[n&1][m][b];

	cout<<Ans<<endl;
	return 0;
}