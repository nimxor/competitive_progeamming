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

vector<ll> v;

int main()
{
    int n,i,j;
    ll INF = 2e18;
    ll l,r,k;

    cin>>l>>r>>k;

    ll p=k;
    if(l==1)    v.pb(l);
    while(p<=r){
        if(p>=l){
            v.pb(p);
        }
        if(p>=INF/k) break;
        p=p*k;
    }
    if(v.size()==0){
        cout<<-1<<endl;
        return 0;
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}