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
#define pii pair<int,int>

const int MAXM  = 1e5+10;
int a[MAXM];
int b[MAXM],c[MAXM],sm[MAXM];

int main()
{
    int i,j,k,n,a,b,c;
    cin>>n>>a>>b>>c;

    ll maxm=0;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            int k = a*i+b*j;
            if(k>n)    continue;
            int p = (n-k)%c;
            if(p==0){
                // cout<<i<<" "<<j<<" "<<k<<endl;
                maxm=max(maxm,1LL*(i+j+((n-k)/c)));
            }
        }
    }

    cout<<maxm<<endl;
    return 0;
}