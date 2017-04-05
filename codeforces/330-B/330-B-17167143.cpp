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

int mat[1001];

int main()
{
	int n,e,i,j,k;

	cin>>n>>e;

	mset(mat,0);

	int x,y;
	for(i=0;i<e;i++)
	{
		cin>>x;
		cin>>y;
		mat[x]=1;
		mat[y]=1;
	}

	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	if(n==2 && e==1)
	{
		cout<<0<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<1<<endl;
		cout<<1<<" "<<2<<endl;
		return 0;
	}

	int ret=0;

	cout<<n-1<<endl;

	for(i=1;i<=n;i++)
	{
		if(!mat[i]){
			ret=i;
			break;
		}
	}

	for(i=1;i<=n;i++)
	{
		if(i==ret)
			continue;
		cout<<i<<" "<<ret<<endl;
	}
	return 0;

}