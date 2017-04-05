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
const int MAXM = 4e2+5;
const int MAXN = 1e6+4;

int a[MAXM];
int dp[MAXM][MAXM];
vector<int> v[MAXM],v1[MAXM];
bool visit1[MAXM],visit2[MAXM];
int d1[MAXM],d2[MAXM];
queue<int> q;

int main()
{
	for(int i=0;i<MAXM;i++){
		d1[i]=10000000;
		d2[i]=10000000;
	}
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		v[y].pb(x);
		dp[x][y]=1;
		dp[y][x]=1;
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(dp[i][j]==0){
				v1[i].pb(j);
				v1[j].pb(i);
			}
		}
	}
	q.push(1);
	d1[1]=0;
	visit1[1]=1;
	while(!q.empty()){
		int p = q.front();
		q.pop();
		for(auto it : v[p]){
			if(visit1[it])	continue;
			q.push(it);
			d1[it]=min(1+d1[p],d1[it]);
			visit1[it]=1;
		}
	}
	
	q.push(1);
	d2[1]=0;
	visit2[1]=1;
	while(!q.empty()){
		int p = q.front();
		q.pop();
		for(auto it : v1[p]){
			if(visit2[it])	continue;
			q.push(it);
			d2[it]=min(1+d2[p],d2[it]);
			visit2[it]=1;
		}
	}
	if(d1[n]==10000000 or d2[n]==10000000){
		cout<<"-1\n";
	}else{
		cout<<max(d1[n],d2[n])<<endl;
	}
	return 0;
}