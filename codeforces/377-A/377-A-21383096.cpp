#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const int BLOCK_SIZE=330;
const ll maxi = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 5e2+5; 

string s[MAXN];
int visit[MAXN][MAXN];
int arr[4][2]={
	{1,0},
	{0,1},
	{-1,0},
	{0,-1}
};

int n,m,num=0,k,ss=0;

void dfs(int x,int y)
{	
	if(x>=n || y>=m)	return;
	if(x<0 || y<0)	return ;
	if(visit[x][y]==1 || visit[x][y]==2)	return ;
	visit[x][y]=2;
	num++;
	if(num==ss-k)	return ;
	for(int i=0;i<4;i++){
		dfs(x+arr[i][0],y+arr[i][1]);
		if(num==ss-k)	return ;
	}
}

int main()
{
	int i,j;
	cin>>n>>m>>k;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	int x,y;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='.'){
				visit[i][j]=0;
				x=i;y=j;
				ss++;
			}else{
				visit[i][j]=1;
			}
		}
	}

	dfs(x,y);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(visit[i][j]==0)	cout<<"X";
			else if(visit[i][j]==1)	cout<<"#";
			else cout<<".";
		}
		cout<<endl;
	}
	return 0;
}