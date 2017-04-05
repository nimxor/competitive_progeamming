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
const int MAXM = 1e2+5;
const int MAXN = 1e3+5; 

bool visit[MAXN][MAXN];
int n;
vector<pair<int,int> > vp;

void dfs(int x,int y)
{
	visit[x][y]=true;
	for(int i=0;i<n;i++){
		int xx = vp[i].fi;
		int yy = vp[i].se;
		if(!visit[xx][yy]){
			if(xx==x || yy==y)
				dfs(xx,yy);
		}
	}
}

int main()
{
	mset(visit,false);
	int i,j,k;
	cin>>n;
	int x,y;
	for(i=0;i<n;i++){
		cin>>x>>y;
		vp.pb(mp(x,y));
	}

	int cc=0;

	for(i=0;i<n;i++){
		x=vp[i].fi;
		y=vp[i].se;
		if(!visit[x][y]){
			dfs(x,y);
			cc++;
		}
	}

	cout<<cc-1<<endl;
	return 0;
}