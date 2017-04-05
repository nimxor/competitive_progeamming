#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back


int main()
{
	int n,i,j;
	cin>>n;
	ll a[n],b[n];
	
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
		cin>>b[i];
	
	ll xor1=0,xor2=0;
	ll sum=0;	
	
	for(i=0;i<n;i++)
	{
		xor1=xor1 | a[i];
		xor2=xor2 | b[i];
	}
	
	
	cout<<xor1+xor2<<endl;
	/*ll xo1[n],xo2[n];
	xo1[0]=a[0];
	xo2[0]=b[0];
	
	for(i=1;i<n;i++)
	{
		xo1[i]=xo1[i-1]|a[i];
		xo2[i]=xo2[i-1]|b[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			xor1=xor1|a[i];
		}
	}*/
		
	return 0;
}