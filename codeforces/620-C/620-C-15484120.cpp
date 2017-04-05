#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scs(a) scanf("%s",a)
#define pb push_back
#define mp make_pair

map<ll,int>m1;
map<ll,int>m2;
vector<pair<int,int> >v1;
vector<pair<int,int> >v2;

int main()
{
	int n;
	
	int i,j,k;
	sc(n);
	ll a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	ll cnt1=0,cnt2=0;
	
	map<ll, int>:: iterator it;
	int y=1;
	
	for(i=0;i<n;i++)
	{
		it=m1.find(a[i]);
		if(it!=m1.end())
		{
			v1.pb(mp(y,i+1));
			cnt1++;
			y=i+2;
			m1.clear();
		}
		else
			m1.insert(mp(a[i],i+1));
	}
	
	if(!m1.empty())
		m1.clear();
	
	y=n;
	for(i=n-1;i>=0;i--)
	{
		it=m2.find(a[i]);
		if(it!=m2.end())
		{
			v2.pb(mp(i+1,y));
			cnt2++;
			y=i;
			m2.clear();
		}
		else
			m2.insert(mp((a[i]),i+1));
	}
	
	if(!m2.empty())
		m2.clear();

	/* )': */

		
	
	ll h=max(cnt1,cnt2);
	if(h==0)
		printf("-1");
	else
	{
		printf("%lld\n",h);
		if(v1[v1.size()-1].second!=n)
		v1[v1.size()-1].second=n;
		if(h==cnt1)
		{
			for(y=0;y<h;y++)
			{
				printf("%d %d\n",v1[y].first,v1[y].second);
			}
		}
		else
		{
			for(y=0;y<h;y++)
			{
				printf("%d %d\n",v2[y].first,v2[y].second);
			}
		}
	}
		
	return 0;
}

/*
0 0
4 5
*/