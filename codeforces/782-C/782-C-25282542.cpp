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

const ll inf = 1e8;
const int MAXM = 2e5+5;
const int MAXN = 1e6+4;

int a[MAXM];
map<int,int> m;
vector<int> v[MAXM];
int color[MAXM];

int maxm=0;

void dfs(int x,int pa=0)
{
    int cn=0;
	int prev1=color[pa];
	int prev2=color[x];
	for(auto it : v[x])
	{
		if(it==pa)	continue;
		while(1){
			cn++;
			cn%=maxm;
			if(cn==0)	cn=maxm;
			if(cn==prev1 or cn==prev2){
				continue;
			}else{
				color[it]=cn;
				break;
			}
		}
		dfs(it,x);
	}
}

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n-1;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		v[y].pb(x);
	}

	for(i=1;i<=n;i++){
		maxm=max(maxm,(int)v[i].size());
	}
	maxm++;
	cout<<maxm<<endl;
	color[1]=1;
	dfs(1);
	for(i=1;i<=n;i++){
		cout<<color[i]<<" ";
	}
	cout<<endl;
	return 0;
}