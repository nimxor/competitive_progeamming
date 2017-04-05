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
const int MAXM = 1e2+15;
const int MAXN = 1e4+4;

struct matrix
{
	ll D[101][101];
	matrix(void){
		mset(D,0);
	}
};

ll a[MAXM],n ;

matrix mul(matrix a,matrix b)
{
	matrix res;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				res.D[i][j] += (a.D[i][k]*b.D[k][j])%mod;
				if(res.D[i][j]>=mod)	res.D[i][j]%=mod;
			}
		}
	}
	return res;
}

int main()
{
	ll k,i,j;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}
	matrix mat;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(__builtin_popcountll(a[i]^a[j])%3==0){
				mat.D[i][j]=1;
			}
		}
	}
	k--;
	matrix Ans;
	for(i=0;i<=n;i++)	Ans.D[i][i]=1;

	while(k){
		if(k&1){
			Ans = mul(mat,Ans);
		}
		mat = mul(mat,mat);
		k/=2;
	} 
	ll ans=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			ans += Ans.D[i][j];
			if(ans>=mod)	ans%=mod;
		}
	}
	cout<<ans<<endl;
	return 0;
}