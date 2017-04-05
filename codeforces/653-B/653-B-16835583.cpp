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

vector<string> v;

int main()
{
	int i,j,k,x,y,z;

	cin>>n>>q;

	string s,s1;

	for(i=0;i<q;i++)
	{
		cin>>s>>s1;
		m[s]=s1;
	}

	int cnt=0;
	if(n==2)
	{
		tr(m,it)
		{
			if(it->second=="a")
				cnt++;
		}
		cout<<cnt<<endl;
		return 0;
	}
	else if(n==3)
	{
		for(i=0;i<6;i++)
		{
			for(j=0;j<6;j++)
			{
				for(k=0;k<6;k++)
				{
					string temp="";
					temp+=('a'+i);
					temp+=('a'+j);
					temp+=('a'+k);
					v.pb(temp);
				}
			}
		}
	}
	else if(n==4)
	{
		for(i=0;i<6;i++)
		{
			for(j=0;j<6;j++)
			{
				for(k=0;k<6;k++)
				{
					for(x=0;x<6;x++)
					{
						string temp="";
						temp+=('a'+i);
						temp+=('a'+j);
						temp+=('a'+k);
						temp+=('a'+x);
						v.pb(temp);
					}
				}
			}
		}
	}
	else if(n==5)
	{
		for(i=0;i<6;i++)
		{
			for(j=0;j<6;j++)
			{
				for(k=0;k<6;k++)
				{
					for(x=0;x<6;x++)
					{
						for(y=0;y<6;y++)
						{
							string temp="";
							temp+=('a'+i);
							temp+=('a'+j);
							temp+=('a'+k);
							temp+=('a'+x);
							temp+=('a'+y);
							v.pb(temp);
						}
					}
				}
			}
		}
	}
	else if(n==6)
	{
		for(i=0;i<6;i++)
		{
			for(j=0;j<6;j++)
			{
				for(k=0;k<6;k++)
				{
					for(x=0;x<6;x++)
					{
						for(y=0;y<6;y++)
						{
							for(z=0;z<6;z++)
							{
								string temp="";
								temp+=('a'+i);
								temp+=('a'+j);
								temp+=('a'+k);
								temp+=('a'+x);
								temp+=('a'+y);
								temp+=('a'+z);
								v.pb(temp);
							}
						}
					}	
				}
			}
		}
	}


	for(i=0;i<v.size();i++)
	{
		string str=v[i];
		while(str.length()!=1)
		{
			if(present(m,str.substr(0,2)))
				str=m[str.substr(0,2)] + str.substr(2);
			else
				break;
		}
		if(str=="a")
			cnt++;
	}

	cout<<cnt<<endl;

	return 0;
}