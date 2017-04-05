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

ll lcm(ll x,ll y)
{
	return (x/__gcd(x,y))*y;
}

int main()
{
	ll n,i,j,k;
	cin>>n;
	ll t=min(50LL,n);
	ll res = 0LL;
	for(i=0;i<t;i++){
		for(j=i;j<t;j++){
			for (k=j;k<t;k++){
				res=max(res,lcm(n-i,lcm(n-j,n-k)));
			}
		}
	}
	cout<<res<<endl;
	return 0;
}