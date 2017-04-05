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

const int MAXM  = 5e3+50;

ll a[MAXM],su[6*MAXM],dp[MAXM][MAXM];
vector<ll> v[MAXM];
int n,m;

// ll solve(int pos,int k)
// {
//     if(k==0)    return 0;
//     if(pos+m>n)   return 0;
//     if(dp[pos][k]!=-1)  return dp[pos][k];

//     ll ret=0;

//     ret = max(solve(pos+1,k),solve(pos+m,k-1)+su[pos+m]-su[pos]);

//     return dp[pos][k]=ret;
    
// }

int main()
{
    int k,i,j;
    for(i=1;i<MAXM;i++) for(j=0;j<MAXM;j++) dp[i][j]= -1e18;
    
    cin>>n>>m>>k;


    for(i=1;i<=n;i++){
        cin>>a[i];
        su[i]=su[i-1]+a[i];
    }

    for(i=1;i<=n;i++){
        for(j=0;j<=k;j++){
            dp[i][j] = dp[i-1][j];
            if(i>=m && j>0)
                dp[i][j] = max(dp[i][j],dp[i-m][j-1]+su[i]-su[i-m]);
        }
    }

    cout<<dp[n][k]<<endl;

    return 0;
}