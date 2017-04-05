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

int a[MAXM];
vector<int> v[MAXM];
bool visit[MAXM];
vector<int> c[MAXM];
int cc=0;
int conn[MAXM];

void dfs(int x)
{
	c[cc].pb(x);
	visit[x]=1;
	for(auto it : v[x]){
		if(!visit[it]){
			dfs(it);
		}
	}
}

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		v[y].pb(x);
		conn[x]++;
		conn[y]++;
	}	
	for(i=1;i<=n;i++){
		if(!visit[i]){
			dfs(i);
			cc++;
		}
	}
	for(i=0;i<cc;i++){
		int p = c[i].size();
		for(j=0;j<p;j++){
			if(conn[c[i][j]]!=p-1){
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}