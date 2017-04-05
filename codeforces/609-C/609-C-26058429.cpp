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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

vector<pair<ll,ll> > v,Ans;
map<char,ll> m;

ll a[MAXM];

int main()
{
	int n,m,i,j,k;
	cin>>n;
	ll su = 0;
	for(i=1;i<=n;i++){
		scanl(a[i]);
		su += a[i];
	}
	ll q = su/n;
	ll p = su%n;
	sort(a+1,a+1+n);
	ll sum=0;
	for(i=1;i<=n-p;i++){
		sum += max(q,a[i])-min(q,a[i]);
	}
	for(i=n-p+1;i<=n;i++){
		sum += max(q+1,a[i])-min(q+1,a[i]);
	}
	cout<<sum/2<<endl;
	return 0;
}