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
#define double long double  

int main()
{
    int n,t,i,j,k;
    cin>>n>>t;
    int a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    int b[n+1];
    b[0]=0;
    for(i=1;i<=n;i++){
        if(i==1){
            b[i]=a[i];
        }else{
            b[i]=a[i]+b[i-1];
        }
    }

    int maxm=0;
    for(i=1;i<=n;i++){
        int x = lower_bound(b+i,b+n+1,t+b[i-1])-b;
        if(b[x]!=t+b[i-1]) x--;
        maxm=max(maxm,x-i+1);
        // cout<<(x-i+1)<<endl;
    }

    cout<<maxm<<endl;
    return 0;
}