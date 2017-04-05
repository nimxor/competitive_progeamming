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

const int MAXM=3e5+3;
const int MM=2e9+2;
ll a[MAXM],len[MAXM];
map<ll,ll> cnt,visit;


int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++) {  
        cin>>a[i];
        len[i]=1;
    }
    for(i=2;i<=n;i++){
        if(a[i]>a[i-1]){
            len[i]=len[i-1]+1;
        }
    }
    ll maxm=0;
    for(i=1;i<=n;i++){
        maxm=max(maxm,len[i]);
    }
    cout<<maxm<<endl;
    return 0;
}