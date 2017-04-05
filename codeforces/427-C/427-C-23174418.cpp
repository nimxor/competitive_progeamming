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
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)

const int MAXM = 1e5+5;
ll a[MAXM];
vector<int> v[MAXM],vv[MAXM],vp;
vector<vector<int> > scc;
bool visit[MAXM];
stack<int> st;
ll minm=INT_MAX;

void dfs1(int x)
{
	visit[x]=true;
	for(auto it : v[x]){
		if(!visit[it]){
			dfs1(it);
		}
	}
	st.push(x);
}

void dfs2(int x)
{
	minm=min(minm,a[x]);
	visit[x]=true;
	vp.pb(x);
	for(auto it : vv[x]){
		if(!visit[it]){
			dfs2(it);
		}
	}
}

int main()
{
	int n,i,j,k,x,y;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}	

	cin>>k;
	for(i=1;i<=k;i++){
		cin>>x>>y;
		v[x].pb(y);
		vv[y].pb(x);
	}

	for(i=1;i<=n;i++){
		if(!visit[i]){
			dfs1(i);
		}
	}

	for(i=1;i<=n;i++){
		visit[i]=0;
	}

	ll ways=1,money=0;

	while(!st.empty()){
		int p = st.top();
		st.pop();
		if(!visit[p]){
			int c=0;
			minm=INT_MAX;
			vp.clear();
			dfs2(p);
			money+=minm;
			for(i=0;i<vp.size();i++){
				if(a[vp[i]]==minm)	c++;
			}
			ways*=c;
			if(ways>=mod)	ways%=mod;
		}
	}
	

	cout<<money<<" "<<ways<<endl;
	return 0;
}