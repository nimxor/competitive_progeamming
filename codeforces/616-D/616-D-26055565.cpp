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

int a[MAXM],occ[MAXN];
set<int> s;

int main()
{
	int n,k,i,j;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	j=0;
	int Ans=0,r=-1,l=-1;
	for(i=1;i<=n;i++){
		// cout<<i<<" "<<j<<" "<<s.size()<<endl;
		if(s.size()<=k)
		while(j<=n){
			j++;
			// cout<<"**"<<j<<" ";
			occ[a[j]]++;
			s.insert(a[j]);
			if(s.size()>k){
				break;
			}
		}
		if(Ans<j-i){
			Ans=j-i;
			r=j-1;
			l=i;
		}
		occ[a[i]]--;
		if(occ[a[i]]==0)
			s.erase(a[i]);
		// cout<<"\n";
	}
	cout<<l<<" "<<r<<endl;
	return 0;
}