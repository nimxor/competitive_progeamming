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

set<pair<int,int> > s;
int b[MAXM];
vector<int> a[MAXM],dp[MAXM];

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=0;i<n+4;i++){
		a[i].resize(m+3,0);
		dp[i].resize(m+3,0);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scan(a[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		// s.insert(mp(i,i));
		b[i]=i;
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[j][i]>=a[j-1][i]){
				dp[j][i] = dp[j-1][i]+1;
				if(a[j][i]>a[j+1][i]){
					// s.insert(mp(j-dp[j][i]+1,j));
					b[j-dp[j][i]+1] = max(b[j-dp[j][i]+1],j);
				}
			}else{
				dp[j][i]=1;
			}
		}
	}
	// for(auto it : s){
	// 	cout<<it.fi<<" "<<it.se<<endl;
	// }
	int maxm = 0;
	for(i=1;i<=n;i++){
		maxm=max(maxm,b[i]);
		b[i]=maxm;
		// cout<<b[i]<<endl;
	}

	cin>>k;
	while(k--)
	{
		int l,r;
		scan(l);scan(r);
		if(b[l]>=r){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}