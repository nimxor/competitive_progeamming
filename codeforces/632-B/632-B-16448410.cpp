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
	ll a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	string s;
	
	cin>>s;
	ll maxm=0,sum=0;
	
	for(i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
		if(s[i]=='B')
			sum+=a[i];
	}
	
	maxm=sum;
	string f="";
	for(i=n-1;i>=0;i--)
	{
		f+=s[i];	
	}
	
	sum=0;
	
	ll pre[n+1],suff[n+1];
	memset(pre,0,sizeof(pre));
	
	if(s[0]=='B')
		pre[0]=a[0];
	
	for(i=1;i<n;i++)
	{
		if(s[i]=='B')
			pre[i]=pre[i-1]+a[i];
		else
			pre[i]=pre[i-1];
	}
	
	/*for(i=0;i<n;i++)
		cout<<pre[i]<<" ";
	cout<<endl;*/
	
	for(i=0;i<n;i++)
	{
		if(s[i]=='A')
			sum+=a[i];
		maxm=max(maxm,sum+pre[n-1]-pre[i]);
		
		//cout<<sum+pre[n-1]-pre[i]<<endl;
	}
	
	memset(pre,0,sizeof(pre));
	
	sum=0;
	
	if(f[0]=='B')
		pre[0]=b[0];
	
	for(i=1;i<n;i++)
	{
		if(f[i]=='B')
			pre[i]=pre[i-1]+b[i];
		else
			pre[i]=pre[i-1];
	}
	
	for(i=0;i<n;i++)
	{
		if(f[i]=='A')
			sum+=b[i];
		maxm=max(maxm,sum+pre[n-1]-pre[i]);
	}
	
	cout<<maxm<<endl;
	
	return 0;
}