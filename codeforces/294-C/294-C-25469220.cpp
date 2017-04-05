#pragma GCC optimize("O3")

#include<bits/stdc++.h>
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

const ll inf = 1e17;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

ll nCr[MAXM][MAXM];
ll power[MAXM];
vector<int> v;

int main(){
	power[0]=1;
	for(int i=1;i<MAXM;i++)
		power[i]=(power[i-1]*2)%mod;

	for(int i=0;i<MAXM;i++){
		nCr[i][0]=nCr[i][i]=1;
		for(int j=1;j<i;j++){
			nCr[i][j]=(nCr[i-1][j]+nCr[i-1][j-1])%mod;
		}
	}

	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int k;
		scan(k);
		v.push_back(k);
	}

	sort(v.begin(),v.end());
	int rem=n-m;

	ll ans=1;
	for(int i=1;i<v.size();i++){
		int k= v[i]-v[i-1]-1;
		if(k){
			ans*=power[k-1];
			ans%=mod;
			ans*=nCr[rem][k];
			ans%=mod;
		}
		rem-=k;
	}

	ans*=nCr[rem][v[0]-1];
	rem-=v[0]-1;
	ans%=mod;
	printf("%d\n",(int)ans);
	return 0;
}