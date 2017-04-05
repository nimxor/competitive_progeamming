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

ll a[10] = {2,3,4,5,6,7,8,9,10};

ll lcm(ll x,ll y)
{
	ll p = x/__gcd(x,y);
	return y*p;
}

int main()
{
	ll n,i,j,k,p;
	p = 9;
	cin>>n;
	ll cnt = 0;
	for(i=1;i<(1<<p);i++){
		ll cn=0,mul=1;
		vector<int> v;
		for(j=0;j<p;j++){
			if(i&(1<<j)){
				v.pb(a[j]);
				mul = lcm(mul,a[j]);
			}
		}
		int nn = v.size();
		if(nn&1){
			cn += n/mul;
		}else{
			cn -= n/mul;
		}
		cnt += cn;
	}
	cout<<n-cnt<<endl;
	return 0;
}