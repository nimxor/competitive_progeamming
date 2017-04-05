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
const int MAXM = 2e5+5;
const int MAXN = 1e6+4;

vector<int> v[MAXM];
int color[MAXM];
int leaf=-1,given=-1,f=0;

void dfs(int x,int pa=-1)
{
	leaf = x;
	for(auto it : v[x]){
		if(pa==it)	continue;
		dfs(it,x);
	}
}

void DFS(int x,int pa=-1)
{
	if(pa!=-1){
		if(color[pa]!=color[x]){
			given = x;
			return ;
		}
	}
	for(auto it : v[x]){
		if(pa==it)	continue;
		DFS(it,x);
	}
}

void DFSG(int x,int pa)
{
	if(pa!=given){
		if(color[pa]!=color[x]){
			f=1;
		}
	}
	if(v[x].size()>0)
	for(auto it : v[x]){
		if(pa==it)	continue;
		DFSG(it,x);
	}
}

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}

	for(i=1;i<=n;i++){
		cin>>color[i];
	}

	dfs(1);

	given = leaf;

	DFS(leaf);

	for(auto it : v[given]){
		DFSG(it,given);
	}

	if(f)	cout<<"NO\n";
	else{
		cout<<"YES\n";
		cout<<given<<endl;
	}
	return 0;
}