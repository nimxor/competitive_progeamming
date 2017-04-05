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
const int MAXM = 5e3+6;
const int MAXN = 2e6+1;

vector<pair<int,double> > vp;
int a[MAXM],n,dp[MAXM];

int solve(int idx)
{
	if(idx==n+1)	return 0;
	if(dp[idx]!=-1)	return dp[idx];
	int ret = 0;
	for(int i=0;i<idx;i++){
		if(a[i]<=a[idx]){
			ret = max(ret,solve(i)+1);
		}
	}
	dp[idx]=ret;
	return ret;
}

int main()
{
	mset(dp,-1);
	dp[0]=0;
	double p;
	int m,i,j,k;
	scan(n);scan(m);

	for(i=1;i<=n;i++){
		scan(a[i]);
		cin>>p;
	}

	int ret=0;
	for(i=1;i<=n;i++){
		ret = max(ret,solve(i)); 
	}

	printf("%d\n",n-ret);

	return 0;
}