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

const ll inf = 1e8;
const int MAXM = 1e6+5;
const int MAXN = 1e6+4;

ll fact[MAXM],a,b;

void pre()
{
	fact[0]=1;
	for(int i=1;i<MAXM;i++){
		fact[i]=i*fact[i-1];
		if(fact[i]>=mod)	fact[i]%=mod;
	}
}

ll modpow(ll e,ll b)
{
	ll res = 1;
	while(b){
		if(b&1){
			res = (e*res)%mod;
		}
		e=(e*e)%mod;
		b/=2;
	}
	return res%mod;
}

ll inv(int x)
{
	return modpow(x,mod-2);
}

ll nCr(ll n,ll r)
{
	ll res = 0;
	res = fact[n];
	if(res>=mod)	res%=mod;
	res *= inv(fact[r]);
	if(res>=mod)	res%=mod;
	res *= inv(fact[n-r]);
	if(res>=mod)	res%=mod;
	return res;
}

bool check(ll x)
{
	while(x){
		int p = x%10;
		x/=10;
		if(p!=a and p!=b)	return 0;
	}
	return 1;
}

int main()
{
	pre();
	ll i,j,k,n;
	cin>>a>>b>>n;
	ll su = 0;
	for(i=0;i<=n;i++){
		ll p = min(i,n-i);
		if(!check(i*a+(n-i)*b))	continue;
		su += nCr(n,p);
		if(su>=mod)	su%=mod;
	}
	cout<<su<<endl;
	return 0;
}