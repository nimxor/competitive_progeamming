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
const int MAXM = 5e5+5;
const int MAXN = 1e6+4;

int a[MAXM],dp[MAXM];

// void dfs(string s)
// {
// 	cout<<s<<endl;
// 	if(s.length()>55)	return ;
// 	if(s.length()<=n)	cn++;
// 	dfs(s+"7");
// 	s.pop_back();
// 	dfs(s+"8");
// 	s.pop_back();
// }

int main()
{
	double n,t;
	cin>>n>>t;
	double p = 1.000000011;
	double x = pow(p,t);
	printf("%.6lf\n",(x*n));
	return 0;
}