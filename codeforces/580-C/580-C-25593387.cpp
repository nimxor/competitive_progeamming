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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int  n,k,a[MAXM],cnt=0,dp[MAXM];
vector<int> v[MAXM];

void dfs(int x,int pa)
{
	int f=-1;
	if(a[x]==1){
		dp[x]=dp[pa]+1;
	}else{
		dp[x]=0;
	}
	if(dp[x]>k)	return ;	
	for(auto it : v[x]){
		if(it==pa)	continue;
		dfs(it,x);
		f=1;
	}
	if(f==-1){
		cnt++;
	}
}

int main()
{
	int i,j;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	for(i=1;i<=n-1;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		v[y].pb(x);
	}
	
	dfs(1,0);

	cout<<cnt<<endl;
	return 0;
}