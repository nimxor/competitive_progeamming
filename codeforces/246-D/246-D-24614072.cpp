#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 10+4;

int a[MAXM];

set<int> s[MAXM];

int main()
{
	int n,m,i,j,k;
	scan(n);scan(m);
	int maxmm=0;
	for(i=1;i<=n;i++){
		scan(a[i]);
		maxmm=max(a[i],maxmm);
		s[a[i]].insert(a[i]);
	}
	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		s[a[x]].insert(a[y]);
		s[a[y]].insert(a[x]);
	}
	int maxm = -2,color=1e8;

	for(i=1;i<=maxmm;i++){
		if(s[i].empty())	continue;
		int sz = s[i].size();
		if(sz-1>=maxm){
			if(maxm==sz-1)
				color = min(color,i);
			if(maxm<sz-1){
				color = i;
			}
			maxm=sz-1;
		}
	}
	printf("%d\n",color);
	return 0;
}