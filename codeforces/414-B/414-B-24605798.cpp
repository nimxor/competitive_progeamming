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
vector<int> v[MAXM];

ll solve(int idx,int prev)
{
	if(idx==k)	return 1;
	if(dp[idx][prev]!=-1)	return dp[idx][prev];
	ll ret = 0;
	if(prev==0){
		for(int i=1;i<=n;i++){
			ret += solve(idx+1,i);
			if(ret>=mod)	ret%=mod;
		}
	}else{
		for(int i=prev;i<=n;i+=prev){
			ret += solve(idx+1,i);
			if(ret>=mod)	ret%=mod;
		}
	}
	return dp[idx][prev]=ret;
}

int main()
{
	mset(dp,-1);
	int i,j;
	scan(n);scan(k);
	printf("%lld\n",solve(0,0));
	return 0;
}