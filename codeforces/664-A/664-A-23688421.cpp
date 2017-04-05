#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a,s) printf("Case #%d: %s\n",a,s)

const int MAXM = 1e5+4;
ll dp[MAXM],a[MAXM],b[MAXM],suma[MAXM],sumb[MAXM];

void solve()
{
	string a,b;
	cin>>a>>b;
	if(a==b) 	cout<<a<<endl;
	else	cout<<1<<endl;
}

int main()
{
	solve();
	return 0;
}