#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
	ll n,i,j,k;
	double m;
	cin>>n>>m;
	
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	
	long long sum=1;
	k=1;	
	for(i=n-2;i>=0;i--)
	{
		if(s[i]=="halfplus")
		{
			sum=sum*2+1;
		}
		else
		{
			sum=sum*2;
		}
	}
	
	//cout<<sum<<endl;
	
	ll ans=0;
	while(sum!=0)
	{
		if(sum&1)
		{
			ans+=(sum/2)*m;
			ans+=0.5*m;
		}
		else
		{
			ans+=(sum/2)*m;
		}
		sum/=2;
	}
	
	cout<<ans<<endl;
	
	return 0;
}