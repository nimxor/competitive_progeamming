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
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a,s) printf("Case #%d: %s\n",a,s)

const ll maxi = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 5e2+5; 

ll cn[MAXM];
ll dp[MAXM];

int main()
{
    int n,i,j,k;
    
    cin>>n;
    ll a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
        cn[a[i]]++;
    }

    ll sum=0;
    for(i=1;i<MAXM;i++){
        dp[i]=cn[i]*i;
        // cout<<cn[i]<<" ";
    }
    // cout<<endl;

    dp[2]=max(dp[1],dp[2]);
    for(i=3;i<MAXM;i++){
        dp[i]=max(dp[i-1],dp[i]+dp[i-2]);
    }

    cout<<dp[MAXM-1]<<endl;
    return 0;
}