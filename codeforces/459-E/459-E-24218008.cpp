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
const int MAXM = 3e5+5;
const int MAXN = 1e6+4;

vector< pair<int,int> >  v[MAXM];
vector<pair<int,pair<int,int> > > vp;
vector<int> vv,vx,vm;
map<int,vector<pair<int,int> > > mm;
int parent[MAXM],dp[MAXM];

// void dfs(int x,int prev,int cn,int pa=-1)
// {
// 	maxmm = max(maxmm,cn);
// 	for(int i=0;i<v[x].size();i++){
// 		int p = v[x][i].fi;
// 		int w = v[x][i].se;
// 		if(pa!=p && w > prev){
// 			parent[p]=x;
// 			dfs(p,w,cn+1,p);
// 		}
// 		// else
// 		// {
// 		// 	if(parent[x]!=p && w > prev){
// 		// 		maxmm = max(maxmm,cn);
// 		// 	}
// 		// }
// 	}
// }

int main()
{
	int mini=-1,maxm=1e8;
	int n,m,i,j,k,x,y,w;
	scan(n);scan(m);
	for(i=0;i<m;i++){
		scan(x);scan(y);scan(w);
		mm[w].pb(mp(x,y));
	}

	map<int,vector<pair<int,int> > >:: iterator it;

	for(it=mm.begin();it!=mm.end();it++){
		vector<pair<int,int> > vm = it->se;
		for(i=0;i<vm.size();i++){
			int from = vm[i].fi;
			int to = vm[i].se;
			vx.pb(dp[from]+1);
		}
		for(i=0;i<vm.size();i++){
			int from = vm[i].fi;
			int to = vm[i].se;
			dp[to] = max(dp[to],vx[i]);
		}
		vx.clear();
	}
	
	for(i=1;i<=n;i++){
		mini=max(mini,dp[i]);
	}

	printf("%d\n",mini);

	return 0;
}