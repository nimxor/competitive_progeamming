#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 2e3+5;
const int MAXN = 5e5+5; 

ll a[MAXM][MAXM],dp1[2*MAXM+5],dp2[2*MAXM+5];
pair<int,int> p[2];

int main()
{
	int n,i,j,k;

	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%lld",&a[i][j]);
			dp1[i+j]+=a[i][j];
			dp2[i-j+n]+=a[i][j];
		}
	}

	ll val1=0,val2=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			ll su = dp1[i+j]+dp2[i-j+n]-a[i][j];
			if(su>=val1 and !((i+j)&1)){
				val1=su;
				p[0].fi=i;
				p[0].se=j;
			}
			if(su>=val2 and ((i+j)&1)){
				val2 = su;
				p[1].fi=i;
				p[1].se=j;
			}
		}
	}

	cout<<val1+val2<<endl;
	cout<<p[0].fi<<" "<<p[0].se<<" "<<p[1].fi<<" "<<p[1].se<<endl;
	
	return 0;
}