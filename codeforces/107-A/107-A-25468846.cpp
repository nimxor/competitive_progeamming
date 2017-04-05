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

const ll inf = 1e17;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

vector<pair<int,int> > v[MAXM];
int in[MAXM],out[MAXM]; 
bool visit[MAXM];
vector<pair<int,pair<int,int> > > vp;

void DFS(int x,int mind,int st)
{
	if(out[x]==0 and in[x]!=0){
		vp.pb(mp(st,mp(x,mind)));
	}
	for(int i=0;i<v[x].size();i++){
		pair<int,int> p = v[x][i];
		if(!visit[p.fi]){
			mind=min(mind,p.se);
			DFS(p.fi,mind,st);
		}
	}
}

int main()
{
	int n,m,i,j,k,w;
	cin>>n>>m;

	for(i=1;i<=m;i++){
		int x,y,w;
		scan(x);scan(y);scan(w);
		v[x].pb(mp(y,w));
		out[x]=1;
		in[y]=1;
	}

	for(i=1;i<=n;i++){
		if(!visit[i]){
			if(in[i]==0 and out[i]!=0)
				DFS(i,1e7,i);
		}
	}

	cout<<vp.size()<<endl;

	sort(vp.begin(),vp.end());

	for(i=0;i<vp.size();i++){
		cout<<vp[i].fi<<" "<<vp[i].se.fi<<" "<<vp[i].se.se<<endl;
	}

	return 0;
}