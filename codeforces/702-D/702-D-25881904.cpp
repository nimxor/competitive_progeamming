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
#define se second
#define fi first
#define pi 3.14159265358979323
 
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 1e5+15;
const int MAXN = 1e4+4;

int main()
{
	ll d,k,a,b,t;
	cin>>d>>k>>a>>b>>t;
	if(d<=k){
		cout<<a*d<<endl;
		return 0;
	}
	ll minm=d*b;
	ll temp=0;
	d -= k;
	temp += a*k;
	if(d*b<=((d/k)*t+(((d/k)*k)*a))+min((d%k)*b,t+(d%k)*a)){
		temp += d*b;
	}else{
		temp += ((d/k)*t+(((d/k)*k)*a))+min((d%k)*b,t+(d%k)*a);
	}
	cout<<temp<<endl;
	return 0;
}