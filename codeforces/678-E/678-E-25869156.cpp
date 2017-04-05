#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
// #define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first
#define pi 3.14159265358979323
 
const ll inf = 1e7;
const int MAXM = 1<<20;
const int MAXN = 19;

double a[MAXN][MAXN];
double dp[MAXM];
bool used[MAXM];
int n;

double solve(ll mask)
{
	if(mask==1)	return 1.0;
	if(!(mask&1))	return 0.0;
	if(used[mask])	return dp[mask];
	double ret = 0;
	for(int i=0;i<n;i++){
		if(!(mask&(1<<i))) continue;
		for(int j=0;j<n;j++){
			if(!(mask&(1<<j)) or i==j)	continue;
			double re =0;
			re += (a[i][j]*solve(mask^(1<<j)));
			re += (a[j][i]*solve(mask^(1<<i)));
			ret=max(ret,re);
		}
	}
	dp[mask]=ret;
	used[mask]=true;
	return 1.0*ret;
}

int main()
{
	mset(used,false);
	int t,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	printf("%0.6lf\n",solve((1<<n)-1));
	return 0;
}