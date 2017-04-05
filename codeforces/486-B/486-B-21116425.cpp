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
const int MAXM = 1e2+5;
const int MAXN = 5e2+5; 

int dp[MAXM][MAXM],ro[MAXM][MAXM],co[MAXM][MAXM],a[MAXM][MAXM],ans[MAXM][MAXM];

int ff=0,fff=0;

bool check(int n,int m)
{
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(dp[i][j]==1){
                ff=0;
                for(k=1;k<=n;k++){
                    if(ans[k][j]==1) ff=1;
                }
                for(k=1;k<=m;k++){
                    if(ans[i][k]==1) ff=1;
                }
                if(ff!=1){
                    fff=1;
                }
            }else{
                ff=0;
                for(k=1;k<=n;k++){
                    if(ans[k][j]==1) ff=1;
                }
                for(k=1;k<=m;k++){
                    if(ans[i][k]==1) ff=1;
                }
                if(ff==1){
                    fff=1;
                }
            }
        }
    }
    if(fff==1)   return false;
    else    return true;
}

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>dp[i][j];
            ro[i][j]=ro[i][j-1]+dp[i][j];
            // cout<<ro[i][j]<<endl;
        }
        // cout<<endl;
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            co[j][i]=co[j-1][i]+dp[j][i];
        }
    }

    // for(i=1;i<=n;i++){
    //     for(j=1;j<=m;j++){
    //         // co[j][i]=co[j-1][i]+dp[j][i];
    //         cout<<co[i][j]<<" "; 
    //     }
    // }

    int f=0;

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(co[n][j]!=n && ro[i][m]!=m && dp[i][j]==1){
                f=1;
            }
        }
    }

    if(f) {
        cout<<"NO"<<endl;
        return 0;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(co[n][j]==n && ro[i][m]==m){
                ans[i][j]=1;
            }else{
                ans[i][j]=0;
            }
        }
    }

    if(check(n,m)){
        cout<<"YES"<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}