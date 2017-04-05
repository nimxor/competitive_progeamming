#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 786433
 
const int MAXM = 2e5+2; 
vector<ll> v;

void solve(ll n)
{
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i==n/i) {
                v.pb(i);
                continue;
            }
            v.pb(i);
            v.pb(n/i);
        }
    }
}


int main()
{
    ll a,b,i,j,k;
    cin>>a>>b;
    ll gcd=__gcd(a,b);
    // cout<<gcd<<endl;
    solve(gcd);
    sort(v.begin(),v.end());
    ll x,y;
    int n;
    cin>>n;
    while(n--)
    {
        ll ans=0;
        cin>>x>>y;
        for(i=v.size()-1;i>=0;i--){
            if(v[i]>=x && v[i]<=y){
                ans=v[i];
                break;
            }
        }
        if(ans!=0)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}