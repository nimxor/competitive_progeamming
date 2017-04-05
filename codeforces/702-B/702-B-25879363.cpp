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

int a[MAXM];
ll su=0;
map<ll,ll> m,freq;

void pree()
{
	m[1]=1;
	ll p=1;
	for(int i=1;i<34;i++){
		p=2LL*p;
		m[p]=1;
	}
}

int main()
{
	pree();
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		scan(a[i]);
		freq[a[i]]++;
	}
	for(i=1;i<=n;i++){
		for(auto it : m){
			if(freq[it.fi-a[i]]!=0){
				if(2*a[i]==it.fi){
					su += freq[a[i]]-1;
				}else{
					su += freq[it.fi-a[i]];
					// cout<<it.fi<<" "<<a[i]<<endl;
				}
			}
		}
	}
	cout<<su/2<<endl;
	return 0;
}