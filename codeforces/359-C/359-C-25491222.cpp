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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll a[MAXM],pre[MAXM],su[MAXM];
map<ll,ll> cnt;

ll modpow(ll e,ll b)
{
	ll res = 1LL;
	while(b)
	{
		if(b&1){
			res = (res*e)%mod; 
		}
		e = (e*e)%mod;
		b/=2;
	}
	return res;
}

int main()
{
	ll n,x,i,j,k;
	cin>>n>>x;
	for(i=1;i<=n;i++){
		cin>>a[i];
		pre[i] = pre[i-1] + a[i];
	}
	for(i=1;i<=n;i++){
		su[i] = pre[n]-a[i];
	}
	sort(su+1,su+1+n);
	ll minm = su[1];
	ll ans = minm;
	for(i=1;i<=n;i++){
		su[i]-=minm;
		cnt[su[i]]++;
	}
	// cout<<ans<<endl;
	for(auto it : cnt)
	{
		if(it.se%x==0){
			cnt[it.fi+1]+=it.se/x;
		}else{
			ans += it.fi;
			break;
		}
	}
	cout<<modpow(x,min(pre[n],ans))<<endl;
	return 0;
}