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
const int MAXM = 1e3+2;
const int MAXN = 1e6+4;
int n;
ll a[MAXM],dp[MAXM];
string s;

ll solve1(int idx)
{
	if(idx==n)	return 1;
	if(dp[idx]!=-1)	return dp[idx];
	ll ret = 0,minm=1e4;;
	for(int i=idx;i<n;i++){
		minm=min(minm,a[s[i]-'a']);
		if(minm<i-idx+1)	break;
		ret += solve1(i+1);
		if(ret>=mod)	ret%=mod;
	}
	dp[idx]=ret;
	return ret;
}

ll solve2(int idx)
{
	if(idx==n)	return 0;
	if(dp[idx]!=-1)	return dp[idx];
	ll ret = 0,minm=1e4;;
	for(ll i=idx;i<n;i++){
		minm=min(minm,a[s[i]-'a']);
		if(minm<i-idx+1)	break;
		ret = max(ret,max(i-idx+1,solve2(i+1)));
	}
	dp[idx]=ret;
	return ret;
}

ll solve3(int idx)
{
	if(idx==n)	return 0;
	if(dp[idx]!=-1)	return dp[idx];
	ll ret = 1e6,minm=1e4;;
	for(ll i=idx;i<n;i++){
		minm=min(minm,a[s[i]-'a']);
		if(minm<i-idx+1)	break;
		ret = min(ret,1+solve3(i+1));
	}
	dp[idx]=ret;
	return ret;
}

int main()
{
	int i;
	scan(n);
	cin>>s;
	for(i=0;i<26;i++){
		scanl(a[i]);
	}	
	mset(dp,-1);
	printf("%lld\n",solve1(0));
	mset(dp,-1);
	printf("%lld\n",solve2(0));
	mset(dp,-1);
	printf("%lld\n",solve3(0));
	return 0;
}