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


pair<int ,pair<int , string> > p[100001]; 

bool cmp(pair<int ,pair<int , string> > l , pair<int ,pair<int , string> > r)
{
	return l.first < r.first || (l.first==r.first && l.second.first > r.second.first);
}

int main()
{
	int n,k,i,j,x,y;
	cin>>n>>k;

	string str;
	for(i=0;i<n;i++)
	{
		cin>>str>>x>>y;
		p[i].first=x;
		p[i].second.first=y;
		p[i].second.second=str;
	}

	sort(p,p+n,cmp);

	/*for(i=0;i<n;i++)
		cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<<endl;*/

	int cnt=1;
	vector<pair<int , string> > v;
	for(i=0;i<n;i++)
	{
		if(p[i].fi==cnt)
		{
			v.pb(mp(p[i].se.fi, p[i].se.se));
			continue;
		}
		if(v.size()==1)
			cout<<"?";
		else
		{
			if(v.size()==2)
			{
				cout<<v[0].se<<" "<<v[1].se;
			}
			else
			{
				if(v[1].fi==v[2].fi)
					cout<<"?";
				else
					cout<<v[0].se<<" "<<v[1].se;
			}
		}
		v.clear();
		v.pb(mp(p[i].se.fi, p[i].se.se));
		cnt++;
		cout<<endl;
	}

	if(v.size()==1)
		cout<<"?";
	else
	{
		if(v.size()==2)
		{
			cout<<v[0].se<<" "<<v[1].se;
		}
		else
		{
			if(v[1].fi==v[2].fi)
				cout<<"?";
			else
				cout<<v[0].se<<" "<<v[1].se;
		}
	}
	cout<<endl;
	return 0;
}