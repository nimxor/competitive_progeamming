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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[MAXM];
vector<pair<ll,ll> > v1,v2;

int main()
{
	int n,m,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		ll x,y;
		scanl(x);scanl(y);
		v1.pb(mp(x,y));
	}
	cin>>m;
	for(i=1;i<=m;i++){
		ll x,y;
		scanl(x);scanl(y);
		v2.pb(mp(x,y));
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	ll maxm=0;
	for(i=0;i<n;i++){
		maxm=max(v2[m-1].fi-v1[i].se,maxm);
		// cout<<v2[m-1].fi-v1[i].se<<endl;
	}
	for(i=0;i<m;i++){
		maxm=max(v1[n-1].fi-v2[i].se,maxm);
		// cout<<v1[n-1].fi-v2[i].se<<endl;
	}
	cout<<max(maxm,0LL)<<endl;
	// return 0;
}