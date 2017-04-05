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

vector<pair<ll,ll> > v,Ans;
map<char,ll> m;

int a[11];

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scan(k);
		a[k]++;
	}
	ll su = 0;
	for(i=1;i<=m;i++){
		su += a[i];
	}
	ll Ans=0;
	for(i=1;i<=m;i++){
		Ans += (1LL*a[i]*1LL*(su-a[i]));
	}
	cout<<Ans/2<<endl;
	return 0;
}