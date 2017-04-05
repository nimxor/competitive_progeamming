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

const int MAXM=110;

int main()
{
    int n,i,j,k;
    cin>>n;
    int dp[MAXM][3];
    mset(dp,0);
    for(i=1;i<=n;i++){
        cin>>k;
        if(k==0){
            dp[i][0]=min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2])+1;
            dp[i][1]=MAXM;
            dp[i][2]=MAXM;
        }else if(k==1){
            dp[i][0]=min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2])+1;
            dp[i][1]=min(dp[i-1][2],dp[i-1][0]);
            dp[i][2]=MAXM;
        }else if(k==2){
            dp[i][0]=min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2])+1;
            dp[i][1]=MAXM;
            dp[i][2]=min(dp[i-1][1],dp[i-1][0]);
        }else{
            dp[i][0]=min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2])+1;
            dp[i][1]=min(dp[i-1][2],dp[i-1][0]);
            dp[i][2]=min(dp[i-1][1],dp[i-1][0]);
        }
    }
    cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<endl;;
    return 0;
}