//http://codeforces.com/contest/710/problem/E

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first
#define pi 3.14159265358979323
 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 2e7+15;
const int MAXN = 1e4+4;

ll dp[MAXM];

void unite(ll &x,ll y)
{
	x = min(x,y);
}

int main()
{
	ll n,x,y,i;
	cin>>n>>x>>y;
	for(i=0;i<=n;i++){
		dp[i]=i*x;
	}
	for(i=0;i<n;i++){
		unite(dp[2*i],dp[i]+y);
		unite(dp[2*i+1],dp[i]+x+y);
		unite(dp[2*i-1],dp[i]+x+y);
	}
	cout<<dp[n]<<endl;
	return 0;
}