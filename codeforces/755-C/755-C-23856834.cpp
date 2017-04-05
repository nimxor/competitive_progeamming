#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define pb push_back

const ll maxi = 1e17;
const int MAXM = 1e5+10;
vector<int> v[MAXM];
bool visit[MAXM];

void dfs(int x)
{
	visit[x]=1;
	for(int i=0;i<v[x].size();i++){
		if(!visit[v[x][i]]){
			dfs(v[x][i]);
		}
	}
}

int main()    
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		int x=i,y;
		cin>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	int cc=0;
	for(i=1;i<=n;i++){
		if(!visit[i]){
			cc++;
			dfs(i);
		}
	}
	cout<<cc<<endl;
    return 0;
}