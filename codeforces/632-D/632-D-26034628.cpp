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
const int MAXM = 1e6+5;
const int MAXN = 1e6+4;

map<ll,int> freq;
ll a[MAXM];
int cnt[MAXM];

int main()
{
	int n,i,j,k,m;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scanl(a[i]);
		freq[a[i]]++;
	}
	for(i=1;i<MAXM;i++){
		for(j=i;j<MAXM;j+=i){
			cnt[j]+=freq[i];
		}
	}
	int maxm=0,ans=-1;
	for(i=1;i<=m;i++){
		if(maxm<cnt[i]){
			maxm=cnt[i];
			ans=i;
		}
	}
	if(ans==-1){
		cout<<"1 0\n";
		return 0;
	}
	cout<<ans<<" "<<maxm<<endl;
	for(i=1;i<=n;i++){
		if(ans%a[i]==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}