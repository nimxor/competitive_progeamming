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
const int MAXM = 1e5+2;
const int MAXN = 1e6+4;

ll dp[MAXM],k,su[MAXM];

ll solve(int idx)
{
	if(idx==0)	return 1;
	if(idx<0)	return 0;
	if(dp[idx]!=-1)	return dp[idx];
	ll ret = 0;
	ret += solve(idx-1);
	if(ret>=mod)	ret%=mod;
	ret += solve(idx-k);
	if(ret>=mod)	ret%=mod;
	return dp[idx]=ret;
}

int main()
{
	mset(dp,-1);
	ll t,i,j;
	scanl(t);scanl(k);
	solve(MAXM);
	for(i=1;i<MAXM;i++){
		dp[i]=solve(i);
		su[i]=su[i-1]+dp[i];
		if(su[i]>=mod)	su[i]%=mod;
	}
	while(t--)
	{
		int a,b;
		scan(a);scan(b);
		printf("%lld\n",(su[b]-su[a-1]+mod)%mod);
	}
	return 0;
}