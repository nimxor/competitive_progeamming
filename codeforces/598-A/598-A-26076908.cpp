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
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

ll dp[84];

void pree()
{
	ll x=1;
	dp[0]=1;
	for(int i=1;i<45;i++){
		dp[i] = 2*dp[i-1];
	}
}

int main()
{
	pree();
	ll t,n,i,j,k;
	cin>>t;
	while(t--)
	{
		scanl(n);
		ll p = (n*(n+1))/2;
		ll q = 1+(log2(n));
		q = dp[q]-1; 
		q = q*2LL;
		cout<<p-q<<endl;
	}
	return 0;
}