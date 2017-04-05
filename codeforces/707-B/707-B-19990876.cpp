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
 
const int MAXM=2e5+2;
ll a[MAXM];
vector<pair<ll,pair<ll,ll> > > vp;
map<ll,ll> mm;
int main()
{
    ll n,m,k,i,j;
    ll x,y,p;
    cin>>n>>m>>k;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>p;
        vp.pb(mp(x,mp(y,p)));
    }

    for(i=0;i<k;i++)
    {
        cin>>a[i];
        mm[a[i]]=1;
    }

    ll ans=INT_MAX;
    for(i=0;i<vp.size();i++){
        int u=vp[i].fi;
        int v=vp[i].se.fi;
        if(mm[u]==1 && mm[v]==1)    continue;
        if(mm[u]==1 || mm[v]==1){
            ans=min(ans,vp[i].se.se);
        }
    }

    if(ans==INT_MAX)  cout<<-1;
    else    cout<<ans<<endl;

    return 0;
}