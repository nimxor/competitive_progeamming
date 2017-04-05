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
const int MAXM = 1e5+1;
const int MAXN = 1e4+4;

int dp[MAXM],a[MAXM];

int main()
{
	ll n,i,j,k;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	ll Ans = 0;
	ll p = 2*k;
	for(i=1;i<=n;i++){
		if(a[i]>=p){
			Ans += a[i]/p;
			a[i] = a[i]%p;
		}
	}
	// for(i=1;i<=n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	for(i=1;i<=n;i++){
		if(a[i]>k){
			Ans += a[i]/k;
			a[i] = 0;
		}
	}
	// for(i=1;i<=n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	vector<int> v;
	for(i=1;i<=n;i++){
		if(a[i]!=0)
			v.pb(a[i]);
	}
	Ans += ((int)v.size())/2;
	if((int)v.size()&1){
		Ans++;
	}
	cout<<Ans<<endl;
	return 0;
}