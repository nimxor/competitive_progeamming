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

vector<int>v;
vector<int>v1;

int main()
{
	ll n,k,i,j;
	
	cin>>n>>k;
	
	int a[n],f=1;
	ll cnt=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%10!=0)
		{
			v.pb(a[i]%10);
			v1.pb(9-a[i]/10);
			cnt+=a[i]/10;
		}
		else
		{
			if(a[i]!=100)
				v1.pb(10-a[i]/10);
			cnt+=a[i]/10;
		}
	}
	
	sort(v.rbegin(),v.rend());
	
	for(i=0;i<v.size();i++)
	{
		int x=10-v[i];
		k-=x;
		if(k<0)
		{
			f=0;
			break;
		}
		cnt++;
	}
	
	
	sort(v1.begin(),v1.end());
	
	if(f==1)
	{
		//cout<<v1[0]<<endl;
		for(i=0;i<v1.size();i++)
		{
			int p=v1[i];
			k-=p*10;
			if(k<0)
			{
				cnt+=(k+p*10)/10;
				f=0;
				break;
			}
			cnt+=p;
		}
	}
	
	cout<<cnt<<endl;
	v.clear();
	return 0;
}