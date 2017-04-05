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
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 3e3+6;
const int MAXN = 2e2+4;

vector<int> v[MAXM];
int dp[MAXM][MAXM];

int main()
{
	int n,m,i,j,k;
	scan(n);scan(m);
	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		dp[x][y]=1;
	}
	ll ans = 0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j)	continue;
			ll r = 0;
			for(k=0;k<v[i].size();k++){
				int p = v[i][k];
				if(p!=j and p!=i and dp[p][j]){
					r++;
				}
			}
			ans += (r*(r-1))/2;
		}
	}

	printf("%lld\n",ans);
	return 0;
}