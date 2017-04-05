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

map<pair<ll,ll>,ll> m; 

ll findlca(ll u,ll v){
    while(u!=v){
        if(u>v) u/=2;
        else    v/=2;
    }
    return u;
}
 
int main()
{
    ll opti,t,n,i,j,k,q;
    ll u,v,w;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld",&opti,&u,&v);
        ll x = findlca(u,v);
        if(opti==1){
            scanf("%lld",&w);
            while(v!=x){
                t=v/2;
                m[{t,v}]+=w;
                m[{v,t}]+=w;
                v=t;
            }
            while(u!=x){
                t=u/2;
                m[{t,u}]+=w;
                m[{u,t}]+=w;
                u=t;
            }
        }else{
            ll ans=0;
            while(u!=x){
                t=u/2;
                if(m.find({u,t})!=m.end()){
                    ans+=m[{u,t}];
                }
                u=t;
            }
            while(v!=x){
                t=v/2;
                if(m.find({v,t})!=m.end()){
                    ans+=m[{v,t}];
                }
                v=t;
            }
            printf("%lld\n",ans);
        }
    }    
    return 0;
}