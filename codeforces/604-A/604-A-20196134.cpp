#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const int MAXM = 1e5+2;


int main() 
{
    int n,i,j,k;
    n=5;
    int a[5],b[5],maxm[5];
    for(i=1;i<=n;i++){
        maxm[i-1] = i*500;
    }
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    int hs,hu;
    cin>>hs>>hu;

    ll ans=0,p=0;
    for(i=0;i<n;i++){
        p = max((3*maxm[i])/10,((250-a[i])*(maxm[i]/250))-(50*b[i]));
        ans+=p;
    }

    ans+=(hs*100);
    ans-=(hu*50);

    cout<<ans<<endl;
    return 0;
}