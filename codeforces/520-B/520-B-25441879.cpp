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

queue<int> q;
map<int,int> dist;

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	dist[n]=0;
	q.push(n);
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		// cout<<p<<endl;
		if(p==m)	break;
		if(p<=m+4 and dist[2*p]==0){
			q.push(2*p);
			dist[2*p]=dist[p]+1;
		}
		if(dist[p-1]==0 and p>1){
			q.push(p-1);
			dist[p-1]=dist[p]+1;
		}
	}
	cout<<dist[m]<<endl;
	return 0;
}