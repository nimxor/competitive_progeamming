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



int main()
{
	int n,i,j,k;
	cin>>n;
	ll a[n];
	
	for(i=0;i<n;i++)
		cin>>a[i];
		
	sort(a,a+n);
	ll sum=0,p;
	int f=0,cnt=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2==0)
			sum+=a[i];
			
		else
		{
			p=a[i];
			sum+=a[i];
			cnt++;
		}
	}
	
	if(cnt%2==0)
		cout<<sum<<endl;
	else
		cout<<sum-p<<endl;
	return 0;
}