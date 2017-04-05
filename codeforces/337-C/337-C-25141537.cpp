#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000009
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e8;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll modpow(ll e,ll b)
{
	ll ret = 1;
	while(b){
		if(b&1){
			ret = (ret*e)%mod;
		}
		e = (e*e)%mod;
		b/=2;
	}
	return ret%mod;
}

int main()
{
	ll n,m,x,i,j,k;
	cin>>n>>m>>k;
	x = max(0LL,m-((n-n%k)/k)*(k-1)-n%k);
	ll Ans = (((((modpow(2,x+1)-2+mod)%mod)*k)%mod+m)%mod-(x*k)%mod+mod)%mod;
	cout<<Ans<<endl;
	return 0;
}