#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back


int main()
{
	
	int n,i,j,k=0,x;
	
	cin>>n;
	int d[n+1];
	memset(d,0,sizeof(d));
	
	for(i=n;i>=1;i--)
	{
		if(i&1)
		{
			d[k++]=i;
		}	
	}
	
	for(i=n;i>=1;i--)
	{
		if(!(i&1))
			d[k++]=i;
	}
	int cnt=0;
	for(i=0;i<k;i++)
	{
		if(d[i-1]==1)
		{
			if(abs(d[i]-d[i-1])>1)
				cnt++; 
		}
		else
			cnt++;
	}
	cout<<cnt<<endl;
	for(i=0;i<k;i++)
	{
		if(d[i-1]==1)
		{
			if(abs(d[i]-d[i-1])>1)
				cout<<d[i]<<" "; 
		}
		else
			cout<<d[i]<<" ";
	}
	cout<<endl;
	return 0;
}