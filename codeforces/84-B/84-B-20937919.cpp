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

int main()
{
    ll t,n,i,j,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1)   {
        cout<<1<<endl;
        return 0;
    }

    ll sum=0,cn=1,f=0;

    if(n>1)
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cn++;
        }
        else{
            sum+=((1ll*(cn)*(cn-1)))/2;
            cn=1;
        }
    }

    sum+=((1ll*(cn)*(cn-1)))/2;
    sum+=n;
    cout<<sum<<endl;
    return 0;
}