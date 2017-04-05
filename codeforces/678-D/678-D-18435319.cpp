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

ll modpow(ll x,ll y)
{
    x%=mod;
    ll res=1;
    while(y)
    {
        if(y&1)
            res=(res*x)%mod;
        y>>=1;
        x=(x*x)%mod;
    }
    return res;
}

ll inverse(ll n)
{
    return modpow(n,mod-2);
}

 
int main()
{
    ll a,b,n,x,i,j,k;
    cin>>a>>b>>n>>x;
    ll f = modpow(a,n);
    
    if(a-1==0){
        ll ans1=(f*x)%mod;
        ll ans2=((n%mod)*b)%mod;
        cout<<(ans1+ans2)%mod<<endl;
        return 0;
    }
    ll inv=inverse(a-1);

    ll ans1=(f*x)%mod;
    ll ans2=((((((f-1+mod))%mod)*inv)%mod)*b)%mod;

    cout<<(ans1+ans2)%mod<<endl;
    return 0;
}