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
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e2+6;
const int MAXN = 10+4;

ll dp[MAXM][MAXM][MAXN][MAXN][2];

int k1,k2;

ll solve(int n1,int n2,int p,int q,int prev)
{
	if(p>k1 || q>k2)	return 0;
	if(n1==0 && n2==0)	return 1;
	if(n1<0 || n2<0)	return 0;	
	ll ret = 0;
	if(dp[n1][n2][p][q][prev]!=-1)	return dp[n1][n2][p][q][prev];
	if(prev==-1){
		ret += solve(n1-1,n2,p+1,q,0);
		if(ret>=mod)	ret%=mod;
		ret += solve(n1,n2-1,p,q+1,1);
		if(ret>=mod)	ret%=mod;
	}else{
		if(prev==0){
			ret += solve(n1-1,n2,p+1,0,0);
			if(ret>=mod)	ret%=mod;
			ret += solve(n1,n2-1,0,1,1);
			if(ret>=mod)	ret%=mod;
		}else{
			ret += solve(n1,n2-1,0,q+1,1);
			if(ret>=mod)	ret%=mod;
			ret += solve(n1-1,n2,1,0,0);
			if(ret>=mod)	ret%=mod;
		}
	}
	dp[n1][n2][p][q][prev] = ret;
	return ret;
}

int main()
{
	mset(dp,-1);
	int n1,n2;
	scan(n1);scan(n2);scan(k1);scan(k2);
	printf("%lld\n",solve(n1,n2,0,0,-1));
	return 0;
}