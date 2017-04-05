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

ll solve(ll x,ll y)
{
	if(y==0)	return 0;
	ll ret = 0;
	if(y>x)	swap(x,y);
	ret += x/y+solve(y,x%y);
	return ret;
}

int main()
{
	ll a,b;
	cin>>a>>b;

	ll Ans = solve(a,b);

	cout<<Ans<<"\n";
	return 0;
}