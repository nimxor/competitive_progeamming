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

const int inf = 1e8;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

int cn[2][MAXM],n,m,x,y;
int dp[MAXM][2][MAXM];

int solve(int idx,int pre,int cnt)
{
	if(idx==m+1){
		if(cnt>=x and cnt<=y)	return 0;
		else	return inf;
	}
	if(cnt>y)	return inf;
	if(dp[idx][pre][cnt]!=-1)	return dp[idx][pre][cnt];
	int ret;
	if(cnt<x){
		ret = 0;
		if(pre==1)	ret = cn[1][idx]+solve(idx+1,pre,cnt+1);
		else	ret = cn[0][idx]+solve(idx+1,pre,cnt+1);
	}else{
		ret = inf;
		if(pre==1){ 
			ret = min(ret,cn[1][idx]+solve(idx+1,1,cnt+1));
			ret = min(ret,cn[0][idx]+solve(idx+1,0,1));
		}else{
			ret = min(ret,cn[0][idx]+solve(idx+1,0,cnt+1));
			ret = min(ret,cn[1][idx]+solve(idx+1,1,1));
		}
	}
	dp[idx][pre][cnt] = ret;
	return ret;
}

int main()
{
	mset(dp,-1);

	int i,j,k;
	cin>>n>>m>>x>>y;

	string a[n+2];

	for(i=1;i<=n;i++){
		cin>>a[i];
	}

	for(i=0;i<m;i++){
		int cnt = 0;
		for(j=1;j<=n;j++){
			if(a[j][i]=='#')	cnt++;
		}
		cn[1][i+1] = cnt;
		cn[0][i+1] = n-cnt;
	}

	cout<<min(solve(1,0,0),solve(1,1,0))<<endl;

	return 0;
}