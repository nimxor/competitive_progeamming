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

int a[MAXM],b[MAXM];
vector<double> v;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(i=1;i<=n;i++){
		double x = (a[i]);
		double y = (b[i]);
		double ang = atan2(y,x)*180.0/pi;
		if(ang<0)	ang+=360.0;
		v.pb(ang);
	}

	sort(v.begin(),v.end());

	double ans = v[n-1]-v[0];

	for(i=1;i<n;i++){
		ans = min(ans,360-v[i]+v[i-1]);
	}

	printf("%0.6lf",ans);

	return 0;
}