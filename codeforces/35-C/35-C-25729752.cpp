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

const int inf = 1e7;
const int MAXM = 2e5+5;
const int MAXN = 3e3+4;

vector<pair<int,int> > v;

int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n,m,i,j,k;
	cin>>n>>m;
	cin>>k;
	for(i=1;i<=k;i++){
		int x,y;
		cin>>x>>y;
		v.pb(mp(x,y));
	}	
	int ans1=1,ans2=1,dis=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			int p = -1,q=-1,minm=1000000;
			for(int z=0;z<k;z++){
				int x=i,y=j;
				int dist = abs(x-v[z].fi)+abs(y-v[z].se);
				if(minm>dist){
					minm=dist;
					p=x;q=y;
				}
			}
			if(p!=-1 and q!=-1){
				if(minm>dis){
					dis=minm;
					ans1=p;ans2=q;
				}
			}
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}