#include<bits/stdc++.h>
using namespace std;
     
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define iter(a,it) for(auto it: a)
#define f(it,o) f(aut(it, (o).begin()); it != (o).end(); ++ it)
#define tr(cont, it) for(typeof(cont.begin()) it = cont.begin(); it != cont.end(); it++)    
#define dbg(x)  cout<< #x << ": " << (x) << endl; 
#define all(o) (o).begin(), (o).end()
#define UNIQUE(c) (c).resize(unique(all(c)) - (c).begin())  // use with vectors
#define present(cont, e) (cont.find(e) != cont.end()) // find for set/map
#define vpresent(cont, e) (find(all(cont),e) != cont.end())  //find for vectors
#define pb push_back
#define mp make_pair
#define sz(x) (x.size())
#define vii vector<pair<int,int>>
#define pii pair<int,int>

vector<int>v[100005];
bool visited[100005];
int f=0;
int parent[100005];

void dfs(int s, bool &cycle)
{
	int i,j,k;
	visited[s]=true;
	for(i=0;i<v[s].size();i++)
	{
		if(!visited[v[s][i]])
		{
			parent[v[s][i]]=s;
			dfs(v[s][i],cycle);
		}
		else
		{
			if(parent[s]!=v[s][i]){
				cycle=true;
			}
		}
	}
}

void initialize()
{
	for(int i=0;i<100005;i++)
		visited[i]=false;
}

int main()
{
	int n,e,x,y,CC=0;
	cin>>n;                      
	cin>>e;                    
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	
	initialize();
	
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			bool cycle=false;
			dfs(i,cycle);
			if(!cycle)
				CC++;			
		}	
	}
	
	cout<<CC<<endl;
	
	return 0;
}