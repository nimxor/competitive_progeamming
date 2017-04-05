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
#define fi first
#define se second

int main()
{
	int n,m,cnt=0,cnt1=0;
	cin>>n>>m;

	cnt+=n;

	while(1)
	{
		cnt1+=n%m;
		n=n/m;
		cnt+=n;
		if(n<m)
		{
			n=n+cnt1;
			//printf("%d\n",n);
			cnt1=0;
			if(n<m)
				break;
		}
	}

	cout<<cnt<<endl;
	return 0;
}