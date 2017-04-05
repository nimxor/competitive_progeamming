#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e6+5;
const int MAXN = 5e2+5; 
vector<int> v;
vector<pair<int,int> > vp;

int main()
{
    ll n,x,y,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x>>y;
        vp.pb(mp(x,y));
    }

    sort(vp.begin(),vp.end());

    int time=0;
    for(i=0;i<vp.size();i++){
        if(vp[i].fi>vp[i].se){
            if(time<vp[i].se){
                time=vp[i].se;
            }
            if(time>vp[i].se && time<vp[i].fi){
                time = vp[i].fi;
            }
        }else{
            if(time<vp[i].fi){
                time=vp[i].fi;
            }
            if(time<vp[i].se && time>vp[i].fi){
                time = vp[i].se;
            }
        }
    }

    cout<<time<<endl;
    return 0;
}