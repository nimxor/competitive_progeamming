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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int op=0;
int final[MAXM],init[MAXM],lev[MAXM];
vector<int> v[MAXM],vv;

void DFS(int x,int pa=-1)
{
	if(pa!=-1){
		lev[x] = 1+lev[pa];
	}
	for(auto it : v[x]){
		if(it==pa)	continue;
		DFS(it,x);
	}
}

void DFS1(int x,int pa=-1,int o=0,int e=0)
{
	if(lev[x]&1){
		if(o){
			init[x]=1-init[x];	
		}
		if(final[x]!=init[x]){
			o++;
			o%=2;
			op++;
			vv.pb(x);
		}
	}else{
		if(e){
			init[x]=1-init[x];
		}
		if(final[x]!=init[x]){
			e++;
			e%=2;
			op++;
			vv.pb(x);
		}
	}
	for(auto it : v[x]){
		if(it==pa)	continue;
		DFS1(it,x,o,e);
	}
}

int main()
{
	int n,i,j,k,m;
	scan(n);
	for(i=1;i<n;i++){
		int x,y;
		scan(x);scan(y);
		v[x].pb(y);
		v[y].pb(x);
	}
	for(i=1;i<=n;i++){
		scan(init[i]);
	}
	for(i=1;i<=n;i++){
		scan(final[i]);
	}
	lev[1]=1;
	DFS(1);
	DFS1(1);
	cout<<op<<endl;
	for(i=0;i<op;i++){
		cout<<vv[i]<<"\n";
	}
	return 0;
}