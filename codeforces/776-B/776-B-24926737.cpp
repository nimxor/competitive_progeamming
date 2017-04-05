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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[MAXM],dp[MAXM];

void solve()
{
	dp[1]=1;
	for(int i=2;i<MAXM;i++){
		if(dp[i]==0){
			dp[i]=1;
			for(int j=2*i;j<MAXM;j+=i){
				dp[j]=2;
			}
		}
	}
}

int main()
{
	solve();
	int n;
	cin>>n;
	if(n==1 or n==2){
		cout<<1<<endl;
		if(n==1){
			cout<<1<<endl;
		}else{
			cout<<1<<" "<<1<<endl;
		}
		return 0;
	}
	cout<<2<<endl;
	for(int i=2;i<=n+1;i++){
		cout<<dp[i]<<" ";
	}
	return 0;
}