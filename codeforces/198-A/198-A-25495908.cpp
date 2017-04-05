// In these type of problems just make initial state point to final state(As only one variable is changed)
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

ll k;

int main()
{
	ll b,n,t,i,j;
	cin>>k>>b>>n>>t;
	int ans = n;
    ll cur = 1;
    while (cur < t && ans > 0) {
      cur = cur * k + b;
      ans--;
    }
    if (cur > t) ans++; // increment is needed to eqalize 
    cout<<ans<<endl;
	return 0;
}