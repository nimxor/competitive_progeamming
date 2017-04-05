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
const int MAXM = 1e3+1;
const int MAXN = 1e4+4;

ll a[MAXM];

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}
	ll cn=0;
	vector<int> v;
	for(i=2;i<=n;i++){
		if(__gcd(a[i-1],a[i])!=1){
			v.pb((i-1));
		}
	}
	cout<<v.size()<<endl;
	j = 0;
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
		if(j<v.size())
		if(i==v[j]){
			cout<<"1 ";
			j++;
		}
	}
	cout<<endl;
	return 0;
}