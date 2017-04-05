#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int p=n-a[0];
	
	int f=0;
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			if(i!=(a[i]+p)%n)
			{
				f=1;
				break;
			}
		}
		else
		{
			if(i!=(a[i]-p+n)%n)
			{
				f=1;
				break;
			}
		}
	}
	
	if(f==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
}