// nice problem 

#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first
#define pi 3.14159265358979323

const ll inf = 1e17;
const int MAXM = 4e3+5;
const int MAXN = 1e6+4;

int a[MAXM];
map<int,int> m;
int dp[MAXM][MAXM];

int main()
{
	int n,i,j,k;
	cin>>n;
	int idx=1;
	for(i=1;i<=n;i++){
		scan(a[i]);
		if(m.find(a[i])==m.end())	m[a[i]]=idx++; //optimization
	}
	for(i=1;i<=n;i++){
		a[i] = m[a[i]];
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			dp[i][j]=1;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			dp[i][a[j]]=max(dp[i][a[j]],1+dp[j][a[i]]);
		}
	}
	int maxm=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			maxm=max(maxm,dp[i][j]);
		}
	}
	cout<<maxm<<endl;
	return 0;
}