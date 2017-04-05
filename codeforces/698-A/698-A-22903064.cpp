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

const int MAXM  = 1e2+10;

int a[MAXM],dp[MAXM][4];

int main()
{
    mset(dp,0);
    int i,j,k,n,m;
    cin>>n;

    for(i=1;i<=n;i++)   cin>>a[i];

    for(i=1;i<=n;i++){
        int k = a[i];

        if(k==0){
            dp[i][1] = max(dp[i-1][1],dp[i-1][2]);
            dp[i][2] = max(dp[i-1][1],dp[i-1][2]);
        }else if(k==1){
            if(i>=2)   {
                dp[i][1] = max(dp[i-1][2],dp[i-2][1])+1;
            }else{
                dp[i][1] = 1+dp[i-1][1];
            }
            dp[i][2] = dp[i-1][2];
        }else if(k==2){
            if(i>=2){
                dp[i][2] = max(dp[i-1][1],dp[i-2][2])+1;
            }else{
                dp[i][2] = 1+dp[i-1][2];
            }
            dp[i][1] = dp[i-1][1];
        }else{
            if(i>=2){
                dp[i][2] = max(dp[i-1][1],dp[i-2][2])+1;
                dp[i][1] = max(dp[i-1][2],dp[i-2][1])+1;
            }else{
                dp[i][2] = 1+dp[i-1][2];
                dp[i][1] = 1+dp[i-1][1];
            }
        }
    }

    cout<<n-max(dp[n][1],dp[n][2])<<endl;
    return 0;
}