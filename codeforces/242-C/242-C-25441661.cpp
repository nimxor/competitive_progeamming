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
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

int a[MAXM][MAXM];
map<pair<int,int>,int> d;
queue<pair<int,int> > q;

int dx[8]={1,1,0,-1,-1,-1,0,1};
int dy[8]={0,1,1,1,0,-1,-1,-1};

int main()
{	
	int x1,x2,y1,y2;
	scan(x1);scan(y1);scan(x2);scan(y2);
	int i,j,k,x,y,r,n;
	scan(n);
	for(i=1;i<=n;i++){
		scan(r);scan(x);scan(y);
		for(j=x;j<=y;j++){
			d[mp(r,j)]=-1;
		}
	}
	d[mp(x1,y1)]=0;
	q.push(mp(x1,y1));
	while(!q.empty())
	{
		pair<int,int> p = q.front();
		q.pop();
		for(i=0;i<8;i++){
			int u = p.fi + dx[i];
			int v = p.se + dy[i];
			if(d[mp(u,v)]==-1){
				d[mp(u,v)]=d[p]+1;
				q.push(mp(u,v));
			}
		}
	}

	if(!d[mp(x2,y2)])	cout<<-1<<endl;
	else	cout<<d[mp(x2,y2)]<<endl;
	return 0;
}