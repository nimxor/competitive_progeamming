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
const int MAXM = 1e5+6;
const int MAXN = 1025;
const double eps = 1e-9;

int K;
bool flag[8004][1004];
double dp[8004][1004];

double solve(int days,int orbs)
{
	if(orbs==0)	return 1.0;
	if(days==0 or days<orbs)	return 0.0;
	if(flag[days][orbs])	return dp[days][orbs];
	flag[days][orbs]=true;
	double ret = 0.0;
	int used = K-orbs;
	int unused = orbs;
	double p1 = 1.0*used/K;
	double p2 = 1.0*unused/K;
	if(days)	ret += p1*solve(days-1,orbs);
	if(days and orbs)	ret += p2*solve(days-1,orbs-1);
	dp[days][orbs] = ret;
	return ret;
}

int main()
{
	int q,i,j;
	scan(K);scan(q);
	while(q--)
	{
		double p;
		scanf("%lf",&p);
		double pp = 1.0*p/2000;
		int lo=K,hi=8000,res=K;
		while(lo<=hi){
			int mid = lo+(hi-lo+1)/2;
			if(solve(mid,K)>pp){
				hi = mid-1;
				res = mid;
			}else{
				lo = mid+1;
			}
		}
		printf("%d\n",res);
	}	
	return 0;
}