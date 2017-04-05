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
const int MAXM = 1e3+10;
const int MAXN = 1e6+4;
const int ma = 1e5+5;

int a[MAXM],cnt[MAXM];
int n;
ll dp[MAXM];

int main()
{
	mset(dp,-1);
	int i,j,k;
	scan(n);
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	dp[1]=2;
	for(i=2;i<=n;i++){
		dp[i]=2;
		for(j=a[i];j<i;j++){
			dp[i]+=dp[j];
			if(dp[i]>=mod)	dp[i]%=mod;
		}
	}

	ll ans=0;
	for(i=1;i<=n;i++){
		ans+=dp[i];
		if(ans>=mod)	ans%=mod;
	}

	printf("%lld\n",ans);
	return 0;
}