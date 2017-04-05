#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define scan(a) scanf("%d",&a)

const int MAXM = 1e5+5;
int a[MAXM];
vector<int> v[MAXM],vv,vp,vx;
map<int,int> mm;
bool visit[MAXM];
int an=0;

void dfs(int x)
{
	an+=mm[x];
	vv.pb(x);
	visit[x]=1;
	for(auto p : v[x]){
		if(!visit[p]){
			dfs(p);
		}
	}
}


ll ans=0;

int main()
{
	int n,m,k,i,j;
	cin>>n>>m>>k;

	for(i=0;i<k;i++){
		scan(a[i]);
	}	

	for(i=0;i<m;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		v[y].pb(x);
		mm[x]++;mm[y]++;
	}

	int c=0;

	for(i=0;i<k;i++){
		an=0;
		int p = a[i];
		dfs(p);
		an/=2;
		int nn = vv.size();
		// cout<<nn<<endl;
		ans+=(((1LL*nn*(nn-1))/2)-an);
		if(vv.size()>vp.size()){
			vp=vv;
		}
		vv.clear();	
	}

	// cout<<ans<<endl;

	int maxm = vp.size();

	// cout<<maxm<<endl;

	ll xx = 0;

	for(i=1;i<=n;i++){
		if(!visit[i]){
			an=0;
			dfs(i);
			an/=2;
			int nn = vv.size();
			vx.pb(nn);
			xx+=nn;
			ans+=(((1LL*nn*(nn-1))/2)-an);
			ans+=(1LL*maxm*nn);
			vv.clear();
		}
	}

	ll tt=0;

	for(i=0;i<vx.size();i++){
		ll pp = 1LL*vx[i];
		// cout<<pp<<endl;
		tt+=(1LL*pp*(xx-pp));
	}

	ans+=(tt/2);

	cout<<ans<<endl;

	return 0;
}