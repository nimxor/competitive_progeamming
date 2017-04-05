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
const int MAXM = 1e2+1;
const int MAXN = 1e4+4;

int a[MAXM],old[MAXM],ne[MAXM];

int main()
{
	int n,m,k,i,j,K;
	cin>>n>>m>>k;
	for(i=1;i<=k;i++){
		scan(a[i]);
		old[i]=a[i];
	}
	ll Time=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			int x;
			scan(x);
			for(K=1;K<=k;K++){
				ne[K]=old[K];
			}
			int off=-1;
			for(K=1;K<=k;K++){
				if(x==ne[K]){
					off = K;
					Time += K;
					break;
				}
			}
			int p=2;
			old[1]=ne[off];
			for(K=1;K<=k;K++){
				if(K==off)	continue;
				old[p++] = ne[K];
			}
		}
	}
	cout<<Time<<endl;
	return 0;
}