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

int n,q;
map<string ,string> m;
int res=0;

/*int solve(int idx,string str)
{
	if(idx==n)
	{
		string temp="";
		temp=str[0];

		for(int i=1;i<str.length();i++)
		{
			temp+=str[i];
			if(present(m,temp))		temp=m[temp];
			else	return 0;
		}
		if(temp=="a")
			return 1;
		return 0;
	}
	res=solve(idx+1,str+'a')+solve(idx+1,str+'b')+solve(idx+1,str+'c')+solve(idx+1,str+'d')+solve(idx+1,str+'e')+solve(idx+1,str+'f');
	return res;
}*/


int main()
{
	int n,i,j,k;	
	cin>>n;
	int a[1001]={0};

	for(i=0;i<n;i++)
	{
		cin>>k;
		a[k]++;
	}


	for(i=2;i<1001;i++)
	{
		if(a[i] and a[i-1] and a[i-2])
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}

	cout<<"NO"<<endl;


	return 0;
}