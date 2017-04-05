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
const int MAXM = 2e5+5;
const int MAXN = 1e6+4;

vector<int> v;
int n1;
ll dp[65][2][11][11];

ll solve(int idx,int tight,int st,int en)
{
	if(idx==n1){
		if(st==en)	return 1;
		else	return 0;
	}
	if(dp[idx][tight][st][en]!=-1)	return dp[idx][tight][st][en];
	ll ret = 0;
	if(tight==0){
		for(int i=0;i<=9;i++){
			if(idx==0)
				ret += solve(idx+1,0,i,en);
			else if(idx==n1-1)
				ret += solve(idx+1,0,st,i);
			else
				ret += solve(idx+1,0,st,en);
		}
	}else{
		for(int i=0;i<=v[idx];i++){
			if(idx==0)
				ret += solve(idx+1,tight and (i==v[idx]),i,en);
			else if(idx==n1-1)
				ret += solve(idx+1,tight and (i==v[idx]),st,i);
			else
				ret += solve(idx+1,tight and (i==v[idx]),st,en);
		}
	}
	dp[idx][tight][st][en]=ret;
	return ret;
}


ll go(ll n)
{
	mset(dp,-1);
	v.clear();
	while(n){
		v.pb(n%10);
		n/=10;
	}
	n1 = v.size();
	reverse(v.begin(),v.end());
	return solve(0,1,0,0);
}

int main()
{
	ll l,r,i,j,k;
	cin>>l>>r;
	ll p1 = go(l-1);
	ll p2 = go(r);
	ll cnt=0;
	if(l<=9)
		cnt = min(r,9LL)-l+1;
	cout<<cnt+p2-p1<<endl;
	return 0;
}