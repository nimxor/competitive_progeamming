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
    ll n,q,i,j,k;
    scanf("%lld%lld",&n,&q);
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int l,r;
    for(i=0;i<n+1;i++)  b[i]=0;
    for(i=1;i<=q;i++){
        scanf("%d%d",&l,&r);
        b[l]++;
        b[r+1]--;
    }

    for(i=1;i<=n;i++){
        b[i]=b[i]+b[i-1];
    }

    // for(i=1;i<=n;i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

    sort(b+1,b+n+1);

    sort(a+1,a+n+1);

    ll sum=0;
    for(i=n;i>=1l;i--){
        sum+=(1ll*a[i]*b[i]);
    }

    cout<<sum<<endl;
    return 0;
}