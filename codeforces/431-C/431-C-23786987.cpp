#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a,s) printf("Case #%d: %s\n",a,s)

const int MAXM = 1e3+4;
ll dp[MAXM][2];
int n,k,d;

ll solve(int nn,int temp)
{
	if(nn<0)	return 0;
	if(nn==0 && temp==1)	return 1;
	if(nn==0 && temp==0)	return 0;
	if(dp[nn][temp]!=-1)	return dp[nn][temp];	
	ll ret = 0;
	for(int i=1;i<=k;i++){
		if(i>=d){
			ret += solve(nn-i,1);
			ret%=mod;
		}else{
			ret += solve(nn-i, temp);
			ret%=mod;
		}
	}
	return dp[nn][temp] = ret;
}

int main()
{
	mset(dp,-1);
	scan(n);
	scan(k);
	scan(d);
	cout<<solve(n,0)<<endl;
	return 0;
}