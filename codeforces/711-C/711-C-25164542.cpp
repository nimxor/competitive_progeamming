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

const ll inf = 1e17;
const int MAXM = 1e2+5;
const int MAXN = 1e6+4;

int n,m,k;
ll a[MAXM];
ll color[MAXM][MAXM];
ll dp[MAXM][MAXM][MAXM];

ll solve(int idx,int prev,int cnt)
{
	if(idx==n+1){
		if(cnt==k)	return 0;
		else	return inf;
	}
	if(dp[idx][prev][cnt]!=-1)	return dp[idx][prev][cnt];
	ll ret = inf;
	if(prev==0 and idx==1){
		if(a[idx]!=0){
			ret = min(ret, solve(idx+1,a[idx],1));
		}else{
			for(int i=1;i<=m;i++){
				ret = min(ret, color[idx][i]+solve(idx+1,i,1));
			}
		}
	}else if(a[idx]==0){
		for(int i=1;i<=m;i++){
			ret = min(ret, color[idx][i]+solve(idx+1,i,cnt+(i!=prev)));
		}
	}else{
		ret = min(ret, solve(idx+1,a[idx],cnt+(a[idx]!=prev)));
	}
	dp[idx][prev][cnt] = ret;
	return ret;
}

int main()
{
	mset(dp,-1);
	int i,j;
	cin>>n>>m>>k;
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanl(color[i][j]);
		}
	}
	ll p = solve(1,0,0);
	if(p!=inf)	cout<<p<<endl;
	else	cout<<"-1\n";
	return 0;
}