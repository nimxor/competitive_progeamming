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
const int MAXM= 100001;

vector<pair<ll,ll> > v[MAXM];

ll ans=0,a[MAXM],sz[MAXM];

int dfs2(ll x){
    sz[x]=1;
    for(int i=0;i<v[x].size();i++){
        sz[x]+=dfs2(v[x][i].fi);
    }
    return sz[x];
}

void dfs(ll x,ll d)
{
    if(d>a[x])
    {
        ans+=sz[x];
        return ;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i].fi,max(0LL,d+v[x][i].se));
    }
}

int main()
{
    ll n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    ll x,y;
    for(i=2;i<=n;i++){
        cin>>x>>y;
        v[x].pb(mp(i,y));
    }

    dfs2(1);
    dfs(1,0);
    cout<<ans<<endl;

    return 0;
}