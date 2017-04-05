#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define all(x) x.begin(),x.end()
#define se second
#define fi first
#define pi 3.14159265358979323
 
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

char a[MAXM][MAXM];
int Ans[MAXM][MAXM];
int n,m,cc=0;
bool visit[MAXM][MAXM];
set<pair<int,int> > s;

bool check(int x,int y)
{
	if(x>n or x<1 or y>m or y<1)	return false;
	return true;
}

void dfs(int x,int y)
{
	// cout<<x<<" "<<y<<endl;
	visit[x][y]=1;
	for(int i=0;i<4;i++){
		int px = x+dx[i];
		int py = y+dy[i];
		if(visit[px][py])	continue;
		if(check(px,py)){
			if(a[px][py]=='*'){
				cc++;
			}
			else{
				dfs(px,py);
			}
		}  
	}
}

void dfs1(int x,int y)
{
	// cout<<x<<" "<<y<<endl;
	Ans[x][y]=cc;
	visit[x][y]=1;
	for(int i=0;i<4;i++){
		int px = x+dx[i];
		int py = y+dy[i];
		if(visit[px][py])	continue;
		if(check(px,py)){
			if(a[px][py]=='.')
				dfs1(px,py);
		}  
	}
}


int main()
{
	int k,i,j;
	cin>>n>>m>>k;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]=='.'){
				cc=0;
				dfs(i,j);
				Ans[i][j] = cc;
			}
		}
	}
	mset(visit,false);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]=='.'){
				cc = Ans[i][j]; 
				dfs1(i,j); 
			}
		}
	}
	while(k--)
	{
		int x,y;
		scan(x);scan(y);
		cout<<Ans[x][y]<<endl;
	}
	return 0;
}