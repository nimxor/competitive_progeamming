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

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n;i++)
	{
		if(i==0)
		cout<<(a[1]-a[0])<<" "<<(a[n-1]-a[0])<<endl;
		else if(i==n-1)
		{
			cout<<(a[n-1]-a[n-2])<<" "<<(a[n-1]-a[0])<<endl;;
		}
		else{
			cout<<min((a[i]-a[i-1]),(a[i+1]-a[i]))<<" ";
			cout<<max((a[n-1]-a[i]),a[i]-a[0])<<endl;;
		}
	}
	return 0;
}