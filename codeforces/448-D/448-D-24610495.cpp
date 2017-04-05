#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 2e3+6;
const int MAXN = 2e2+4;

ll b[MAXM];
ll a[MAXM];
ll su[MAXM];
set<ll> s;

int n,k;
ll dp[MAXM][MAXM];

int main()
{
	ll n,m,i,j,k;
	scanl(n);scanl(m);scanl(k);
	ll lo = 1,hi = n*m,ret = -1;
	while(lo<=hi){
		ll mid = lo+(hi-lo+1)/2;
		ll sol = 0;
		for(i=1;i<=n;i++){
			ll p = min(m,mid/i);
			sol += p;
		}
		if(sol>=k){
			ret = mid;
			hi = mid-1;
		}else{
			lo = mid+1;
		}
	}
	printf("%lld\n",ret);
	return 0;
}