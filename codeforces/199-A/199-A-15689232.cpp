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

ll dp[10000100];

int main()
{
	ll n;
	ll i,j,k;
	cin>>n;
	
	if(n==0)
		cout<<"0 0 0"<<endl;
	else
	{
	dp[0]=0;
	dp[1]=1;
	for(i=2;i<10000100;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
		if(dp[i]>=n)
			break;
	}
	
	/*for(j=0;j<100;j++)
		cout<<dp[j]<<" ";
		
	cout<<endl;*/
	
	cout<<"0 "<<dp[i-2]<<" "<<dp[i-1]<<endl;
	}
	return 0;
}

/*

*/