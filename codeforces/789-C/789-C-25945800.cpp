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

ll a[MAXM],dp1[MAXM],dp2[MAXM],c[MAXM],b[MAXM];

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(i>1){
			b[i-1]=abs(a[i]-a[i-1]);
		}
	}
	n--;
	for(i=1;i<=n;i++){
		if(i&1){
			c[i]=b[i];
			b[i]=-b[i];
		}else{
			c[i]=-b[i];
		}
	}
	ll maxm=0;
	for(i=1;i<=n;i++){
		dp1[i]=max(dp1[i],dp1[i-1]+b[i]);
		dp2[i]=max(dp2[i],dp2[i-1]+c[i]);
		maxm=max(maxm,dp1[i]);
		maxm=max(maxm,dp2[i]);
	}
	cout<<maxm<<endl;
	return 0;
}