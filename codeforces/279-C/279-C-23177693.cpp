#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)

const int MAXM = 1e5+5;
ll a[MAXM];
// vector<pair<int,string> > ans;
vector<int> v[MAXM];
int visit[MAXM];

int main()
{
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);

	for(i=1;i<=n;i++){
		scanl(a[i]);
	}

	for(i=1;i<=n;i++){
		if(!visit[i]){
			for(j=i;j<=n;j++){
				if(a[j]<=a[j+1]){
					visit[j]=i;
					continue;
				}
				break;
			}
			visit[j]=i;
		}
	}

	for(i=1;i<=n;i++){
		if(visit[i]==i){
			v[i].pb(i);
			for(j=i+1;j<=n;j++){
				if(a[j-1]<=a[j]){
					v[i].pb(j);
					continue;
				}
				break;
			}
			k=j;
			for(j=k;j<=n;j++){
				if(a[j]<=a[j-1]){
					v[i].pb(j);
					continue;
				}
				break;
			}
		}
	}

	for(i=1;i<=n;i++){
		if(i==visit[i]){
			sort(v[i].begin(),v[i].end());
		}
	}

	for(i=1;i<=m;i++){
		int x,y;
		scan(x);scan(y);
		int p = visit[x];
		int pos = lower_bound(v[p].begin(),v[p].end(),y)-v[p].begin();
		if(v[p][pos]==y)	cout<<"Yes\n";
		else	cout<<"No\n";
	}

	return 0;
}