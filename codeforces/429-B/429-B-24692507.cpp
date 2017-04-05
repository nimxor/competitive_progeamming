#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e3+6;
const int MAXN = 10+4;
const int ma = 1e5+5;

ll dp1[MAXM][MAXM],dp2[MAXM][MAXM],dp3[MAXM][MAXM],dp4[MAXM][MAXM],ar[MAXM][MAXM];

int main()
{
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>ar[i][j];
		}
	}

	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			dp1[i][j]=max(dp1[i-1][j],dp1[i][j-1])+ar[i][j];
		}
	}

	for (int i=n;i;--i){
		for (int j=m;j;--j)	{
			dp2[i][j]=max(dp2[i+1][j],dp2[i][j+1])+ar[i][j];
		}
	}

	for (int i=n;i;--i){
		for (int j=1;j<=m;j++){
			dp3[i][j]=max(dp3[i+1][j],dp3[i][j-1])+ar[i][j];
		}
	}

	for (int i=1;i<=n;i++){
		for (int j=m;j;--j){
			dp4[i][j]=max(dp4[i-1][j],dp4[i][j+1])+ar[i][j];
		}
	}

	ll ans=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (i==1||i==n||j==1||j==m)continue;
			ans=max(ans,dp1[i][j-1]+dp2[i][j+1]+dp3[i+1][j]+dp4[i-1][j]);
			ans=max(ans,dp1[i-1][j]+dp2[i+1][j]+dp3[i][j-1]+dp4[i][j+1]);
		}
	}
	cout<<ans<<endl;
	return 0;
}