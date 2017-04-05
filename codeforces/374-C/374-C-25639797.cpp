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

const int inf = 1e7;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

int n,m;
char str[MAXM][MAXM];
bool visit[MAXM][MAXM];
int dp[MAXM][MAXM];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char s[5] = "DIMA";

int dfs(int ch,int x,int y)
{	
	if(visit[x][y])	return inf;
	if(dp[x][y]!=-1)	return dp[x][y];
	int ans = 0;
	visit[x][y]=true;
	int ind = (ch+1)%4;
	for(int i=0;i<4;i++){
		int px = x + dx[i];
		int py = y + dy[i];
		if(px>=1 and py>=1 and px<=n and py<=m){
			if(s[ind]!=str[px][py])	continue;
			if(ind==3){
				ans = max(ans,1+dfs(ind,px,py));
			}else{
				ans = max(ans,dfs(ind,px,py));
			}
		}
	}
	visit[x][y]=false;
	dp[x][y]=ans;
	return ans;
}	


int main()
{	
	mset(dp,-1);
	int i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>str[i][j];
		}
	}
	int maxm=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(str[i][j]=='D')
				maxm=max(maxm,dfs(0,i,j));
			if(maxm>=inf)	break;
		}
		if(maxm>=inf)	break;
	}
	if(maxm>=inf){
		cout<<"Poor Inna!\n";
	}else if(maxm==0){
		cout<<"Poor Dima!\n";
	}else{
		cout<<maxm<<endl;
	}
	return 0;
}