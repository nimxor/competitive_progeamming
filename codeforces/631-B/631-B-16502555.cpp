#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

map<int ,pair<int , pair<int ,int > > >ma,mx;

vector<pair<int , pair< int , pair<int ,int > > > > v;

bool cmp(pair<int , pair <int , pair< int , int> > > l ,pair<int , pair <int , pair< int , int> > > r)
{
	return l.se.se.fi<r.se.se.fi;
}

int main()
{
	int n,m,k,i,j;
	
	
	cin>>n>>m>>k;
	
	int dp[n+1][m+1];
	
	memset(dp,0,sizeof(dp));
	
	int x,y,z;
	for(i=1;i<=k;i++)
	{
		cin>>x>>y>>z;
		//cout<<x<<y<<z<<endl;;
		if(x==1)
			ma[y]=mp(z,mp(i,x));
		if(x==2)
			mx[y]=mp(z,mp(i,x));
	}
	
	map<int ,pair<int , pair<int ,int > > > :: iterator it ,it1;
	
	i=0;
	for(it=ma.begin();it!=ma.end();it++)
	{
		v.pb(mp(it->fi,mp(it->se.fi , mp(it->se.se.fi , it->se.se.se))));
		//cout<<it->fi<<" "<<it->se.fi<<" "<<it->se.se.fi<<" "<<it->se.se.se<<endl;
	}
		
	for(it=mx.begin();it!=mx.end();it++)
	{
		v.pb(mp(it->fi,mp(it->se.fi , mp(it->se.se.fi , it->se.se.se))));
	}
	
	sort(v.begin(),v.end(),cmp);
	
	/*for(i=0;i<v.size();i++)
		cout<<v[i].fi<<" "<<v[i].se.fi<<" "<<v[i].se.se.fi<<" "<<v[i].se.se.se<<endl;
		
	cout<<endl;*/
	
	/*for(it=ma.begin(),it1=mx.begin();;)
	{
		//cout<<it->fi<<endl;
		
		//cout<<it->fi<<" "<<it->se.fi<<" "<<it->se.se<<endl;
		
		//cout<<it->fi<<" "<<it->se.fi<<" "<<it->se.se.fi<<" "<<it->se.se.se<<endl;
		
		if(it->se.fi > it1->se.fi)
		{
			printf("hello\n");
			if(it1->se.se.se == 1)
			{
				for(i=1;i<=m;i++)
				{
					dp[it1->fi][i]=it1->se.se.fi;
				}
			}
			else
			{
				for(i=1;i<=n;i++)
				{
					dp[i][it1->fi]=it1->se.se.fi;
				}
			}
			it1++;
			if(it1==mx.end())
				break;
		}
		else
		{
			printf("hello1\n");
			if(it->se.se.se == 1)
			{
				for(i=1;i<=m;i++)
				{
					dp[it->fi][i]=it->se.se.fi;
				}
			}
			else
			{
				for(i=1;i<=n;i++)
				{
					dp[i][it->fi]=it->se.se.fi;
				}
			}
			it++;
			if(it==ma.end())
				break;
		}
	}
	
	
	while(it!=ma.end())
	{
		printf("hello2\n");
		if(it->se.se.se == 1)
		{
			for(i=1;i<=m;i++)
			{
				dp[it->fi][i]=it->se.se.fi;
			}
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				dp[i][it->fi]=it->se.se.fi;
			}
		}
		it++;
	}
	
	while(it1!=mx.end())
	{
		printf("hello3\n");
		
		if(it1->se.se.se == 1)
		{
			for(i=1;i<=m;i++)
			{
				dp[it1->fi][i]=it1->se.se.fi;
			}
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				dp[i][it1->fi]=it1->se.se.fi;
			}
		}
		it1++;
	}	
	
	for(i=0;i<v.size;i++)
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	for(i=0;i<v.size();i++)
	{
		//cout<<v[i].fi<<" "<<v[i].se.fi<<" "<<v[i].se.se.fi<<" "<<v[i].se.se.se<<endl;
		if(v[i].se.se.se==1)
		{
			for(j=1;j<=m;j++)
			{
				dp[v[i].fi][j]=v[i].se.fi;
			}
		}
		else
		{
			for(j=1;j<=n;j++)
			{
				dp[j][v[i].fi]=v[i].se.fi;
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}