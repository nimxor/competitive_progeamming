#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define mod 1000000007

map<ll,int>m;
vector<int>v;
vector<int>v1;

int main()
{
	int n,i,j,k;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	
	map<ll,int>:: iterator it1;
	
	for(it1=m.begin();it1!=m.end();it1++)
	{
		v1.pb(it1->fi);
		v.pb(it1->se);
	}
	
	/*for(i=0;i<v.size();i++)
		cout<<v1[i]<<" "<<v[i]<<endl;*/
	ll sum=0;
	int p=v.size();
	if(v.size()>=1)
	for(i=p-1;i>=0;i--)
	{
		k=v1[i];
		if(v[i]==1)
		{
			sum+=v1[i];
			//cout<<sum<<endl;
			continue;
		}
		if(v[i])
		while(v[i]--)
		{
			int x=k;
			while(x--)
			{
				int f=1;
				if(v1.size()>0)
				for(j=v1.size()-1;j>=0;j--)
				{
					if(x==v1[j])
					{
						f=0;
						break;
					}
				}
				if(f==1)
				{
					sum+=x;
					v1.pb(x);
					break;
				}
			}
			if(v[i]==1)
			{
				sum+=v1[i];
				break;
			}
		}
		//cout<<sum<<endl;
	}
	
	cout<<sum<<endl;
	
	return 0;
}