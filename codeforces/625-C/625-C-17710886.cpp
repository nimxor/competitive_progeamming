#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384


int main()
{
	int n,k,i,j,p,q;
	cin>>n>>k;

	int dp[n][n];
	mset(dp,0);

	int c=1;
	for(i=0;i<n;i++){
		for(j=0;j<k-1;j++){
			dp[i][j]=c++;
		}
	}

	for(i=0;i<n;i++){
		for(j=k-1;j<n;j++){
			dp[i][j]=c++;
		}
	}

	ll sum=0;

	for(i=0;i<n;i++){
		sum+=dp[i][k-1];
	}

	cout<<sum<<endl;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}