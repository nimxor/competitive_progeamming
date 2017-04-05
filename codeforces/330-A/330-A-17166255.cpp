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
	int i,j,k,n,m;
	cin>>n>>m;

	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];

	int cnt=0;
	for(i=0;i<n;i++)
	{
		int f=0;
		for(j=0;j<m;j++)
		{
			if(s[i][j]!='.'){
				f=1;
				break;
			}
		}
		if(f==0)
			cnt++;
	}

	int cnt1=0;
	for(i=0;i<m;i++)
	{
		int f=0;
		for(j=0;j<n;j++)
		{
			if(s[j][i]!='.')
			{
				f=1;
				break;
			}
		}
		if(!f)
			cnt1++;
	}

	//cout<<cnt<<" "<<cnt1<<endl;

	int sum=cnt*m + (cnt1*n) - cnt1*cnt;

	cout<<sum<<endl;

	return 0;

}