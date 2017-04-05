#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scs(a) scanf("%s",a)
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define scl(a) scanf("%lld",&a)
#define mod 1000000007
#define vpii  vector<pair<pair<ll,ll>,int> > 
#define pii pair<pair<ll,ll>, int>      
#define PI 3.14159265

vector<pair<int,int> >v;
map<int,int> sum;
map<int,int> diff;

int main()
{
	int n,i,j,k;
	
	cin>>n;
	int x,y;
	
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		v.pb(mp(x,y));
		sum[x+y]++;
		diff[x-y]++;
	}
	
	map<int,int>:: iterator it;
	ll sum1=0;
	for(it=sum.begin();it!=sum.end();it++)
	{
		if(it->se > 1)
		{
			sum1+=(1ll*((it->se)*(it->se-1)))/2;
		}
	}
	
	//cout<<sum1<<endl;
	map<int,int>:: iterator it1;
	for(it1=diff.begin();it1!=diff.end();it1++)
	{
		if(it1->se > 1)
		{
			sum1+=(1ll*((it1->se)*(it1->se-1)))/2;
		}
	}
	
	cout<<sum1<<endl;
	return 0;
}