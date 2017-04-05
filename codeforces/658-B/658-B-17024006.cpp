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

map<int,int> m;

int main()
{
	int n,k,q,i,j;
	cin>>n>>k>>q;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	int x,y;

	map<int,int> :: reverse_iterator it;

	while(q--)
	{
		cin>>x>>y;
		if(x==1)
			m.insert(mp(a[y-1],y));
		else
		{
			int cnt=0,f=0;
			for(it=m.rbegin();it!=m.rend();it++)
			{
				if(cnt>=k)
					break;
				if(it->second == y)
				{
					f=1;
					cout<<"YES"<<endl;
					break;
				}
				cnt++;
			}
			if(f==0)
				cout<<"NO"<<endl;
		}
	}
	return 0;
}