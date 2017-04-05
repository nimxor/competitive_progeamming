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
const int MAXM = 5e2+6;
const int MAXN = 10+4;

ll a[MAXM][MAXM],dp[MAXM][MAXM],x[MAXM];
vector<ll> v;

int main()
{
	int n,i,j,k;
	scan(n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanl(a[i][j]);
			dp[i][j] = a[i][j];
		}
	}
	for(i=1;i<=n;i++)	scanl(x[i]);
	int p;
	for(k=n;k>=1;k--){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				dp[i][j]=min(dp[i][j],dp[i][x[k]]+dp[x[k]][j]);
			}
		}
		ll ans = 0;
		for(i=k;i<=n;i++){
			for(j=k;j<=n;j++){
				ans+=dp[x[i]][x[j]];
			}
		}
		v.pb(ans);
	}
	for(i=0;i<v.size();i++){
		cout<<v[n-i-1]<<" ";
	}
	return 0;
}