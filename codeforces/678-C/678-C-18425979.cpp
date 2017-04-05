#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define MAXM 1000000001

void solve()
{
    ll a,b,n,p,q;
    ll i,j,k,ans=0;

    cin>>n>>a>>b>>p>>q;
    ll lcm = (a/__gcd(a,b))*b;
    ll a1=(n/a)*p+(n/b)*q;

    ll x;

    if(p>q)
        x=((n/lcm)*q);
    else
        x=((n/lcm)*p);

    cout<<a1-x<<endl;
}
 
int main()
{
    solve();
    return 0;
}