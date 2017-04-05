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

// chutiye ka chutiya he rahega tu bc phir overflow :(

int a[MAXM],b[MAXM];
int n,m;

bool cal(ll r)
{
	int j=1,f=0,i;
	for(i=1;i<=m;i++){
		ll maxi = b[i]+r;
		ll mini = b[i]-r;
		while(j<=n){
			if(maxi>=a[j] and mini<=a[j]){
				j++;
			}else{
				break;
			}
		}
		if(j>n){
			f=1;	
			break;
		}
	}
	if(f)	return true;
	else	return false;
}

int main()
{
	int i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	for(j=1;j<=m;j++){
		scan(b[j]);
	}
	ll lo = 0,hi = 2000000000+15LL,ret = -1;
	while(lo<=hi){
		ll mid = lo+(hi-lo+1)/2;
		if(cal(mid)){
			hi = mid-1;
			ret = mid;
		}else{
			lo = mid+1;
		}
	}
	cout<<max(0LL,ret)<<endl;
	return 0;
}