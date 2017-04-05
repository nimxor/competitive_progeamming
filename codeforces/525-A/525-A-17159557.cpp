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
	string s;
	cin>>s;

	int a[26]={0},cnt=0;

	for(i=1;i<s.size();i+=2)
	{
		if(s[i]==s[i-1]-32)
			continue;
		else{
			if(a[s[i]-'A'] != 0){
				a[s[i]-'A']--;
			}else{
				cnt++;
			}	
			a[s[i-1]-'a']++;
		}
	}

	cout<<cnt<<endl;
	return 0;
}