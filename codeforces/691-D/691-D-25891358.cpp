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
const int MAXM = 1e6+15;
const int MAXN = 1e4+4;

int a[MAXM],dsu[MAXM],b[MAXM];
vector<int> v[MAXM],vv[MAXM];

int findroot(int x)
{
	if(x==dsu[x])	return x;
	return dsu[x] = findroot(dsu[x]);
}

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scan(a[i]);
		dsu[i]=i;
	}	

	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		int r1 = findroot(x);
		int r2 = findroot(y);
		dsu[r1]=r2;
	}

	for(i=1;i<=n;i++){
		int r1 = findroot(i);
		v[r1].pb(a[i]);
		vv[r1].pb(i);
	}

	for(i=1;i<=n;i++){
		if(v[i].size()>0){
			sort(v[i].rbegin(),v[i].rend());
			sort(vv[i].begin(),vv[i].end());
		}
	}

	for(i=1;i<=n;i++){
		if(v[i].size()>0){
			for(j=0;j<vv[i].size();j++){
				b[vv[i][j]]=v[i][j];
			}
		}
	}

	for(i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;

	return 0;
}