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

int main()
{
	int n,i,j,k;
	
	
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
		
	ll b[n],c[n];
	
	for(i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			b[i]=a[i];
			c[i]=0;
		}
		else
		{
			b[i]=max(a[i],b[i+1]);
			if(b[i]>b[i+1])
			{
				c[i]=0;
			}
			else if(b[i]>a[i])
			{
				ll k=b[i]-a[i]+1;
				c[i]=k;
			}
			else 
			{
				c[i]=1;
			}
		}
	}
	
	for(i=0;i<n;i++)
		cout<<c[i]<<" ";
	
	return 0;
}
/*
3
2
1 2
2
1 1
3
1 2 3
*/