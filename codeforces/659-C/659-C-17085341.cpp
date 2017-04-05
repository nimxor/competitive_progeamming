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

map<ll,int> m;
vector<ll> v;

int main()
{
	int i,j,n,k;
	cin>>n>>k;

	for(i=0;i<n;i++)
	{
		cin>>j;
		m[j]++;
	}

	int cnt=0;
	
	for(i=1;i<1000000001;i++)
	{
		if(m[i]==0){
			k-=i;
			if(k<0)
				break;
			v.pb(i);
			cnt++;
		}

	}

	cout<<cnt<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";

	cout<<endl;
	return 0;
}