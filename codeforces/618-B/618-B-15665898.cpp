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

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n][n];
	vector<int> visit(n+1,0);
	
	int cnt[n+1];
	int dp[n+1];
	
	for(i=0;i<n;i++)
		dp[i]=0;
	
	int f=0;
	for(i=0;i<n;i++)
	{
		int maxi=0,maxm=0;
		for(j=1;j<=n-1;j++)
			cnt[j]=0;
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]!=0)
				cnt[a[i][j]]++;
		}
		
		for(j=1;j<=n-1;j++)
		{
			if(cnt[j]>maxm)
			{
				maxm=cnt[j];
				maxi=j;
			}	
		}
		
		if(maxm==1)
			dp[i]=n-1;
		else
			dp[i]=maxi;
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(dp[i]==n-1)
		{
			dp[i]=n;
			break;
		}
	}
	
	for(i=0;i<n;i++)
		cout<<dp[i]<<" ";
	
	return 0;
}