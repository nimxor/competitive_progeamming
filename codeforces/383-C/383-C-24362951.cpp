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
const int MAXM = 2e5+5;
const int MAXN = 1e5+4;

int fi[MAXM];
int st[MAXM];
int dis[MAXM];
int timee = 0;
bool visit[MAXM];
vector<int> v[MAXM];
int lev[MAXM];
int BIT[2][MAXM],n;

void dfs(int x,int pa=-1)
{
	st[x]=++timee;
	for(auto it : v[x]){
		if(it!=pa){
			lev[it] = lev[x]+1;
			dis[it]=timee;
			dfs(it,x);
		}
	}
	fi[x]=timee;
}

int arr[MAXM];

void update(int node,int idx,int val)
{
	while(idx<=n){
		BIT[node][idx]+=val;
		idx += (idx & (-idx));
	}
}

int query(int node,int idx)
{
	int res = 0;
	while(idx){
		res += BIT[node][idx];
		idx -= (idx & (-idx));
	}
	return res;
}

int main()
{
	int m,i,j,k;
	scan(n);
	scan(m);
	for(i=1;i<=n;i++){
		scan(arr[i]);
	}
	for(i=1;i<=n-1;i++){
		int x,y;
		scan(x);
		scan(y);
		v[x].pb(y);
		v[y].pb(x);
	}

	// cout<<"he"<<endl;
	dfs(1);

	while(m--)
	{
		int choice,x,val;
		scan(choice);
		if(choice==1){
			scan(x);scan(val);
			if(lev[x]&1){
				update(1,st[x],val);
				update(1,fi[x]+1,-val);
				update(0,st[x],-val);
				update(0,fi[x]+1,val);
			}else{
				update(1,st[x],-val);
				update(1,fi[x]+1,val);
				update(0,st[x],val);
				update(0,fi[x]+1,-val);
			}
		}else{
			scan(x);
			if(lev[x]&1){
				printf("%d\n",arr[x]+query(1,st[x]));
			}else{
				printf("%d\n",arr[x]+query(0,st[x]));
			}
		}
	}

	return 0;
}