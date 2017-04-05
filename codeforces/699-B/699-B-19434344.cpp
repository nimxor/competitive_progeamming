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
 
const int MAXM = 1e3+2; 
vector<int>v[MAXM]; 
bool visit[MAXM];
char a[MAXM][MAXM];
int dpr[MAXM];
int dpc[MAXM];

int main()
{
    mset(dpr,0);
    mset(dpc,0);
    int n,m,i,j,k;
    cin>>n>>m;
    int cnt=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*')
                cnt++;
        }
    }

    if(cnt==0){
        cout<<"YES"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]=='*'){    
                dpr[i]++; 
                dpc[j]++;
            }  
        }
    }


    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(dpr[i]+dpc[j]-1==cnt && a[i][j]=='*'){
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            else if(a[i][j]!='*' && dpr[i]+dpc[j]==cnt){
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<j<<endl;
                    return 0;
            }
        }
    }

    cout<<"NO"<<endl;
    return 0;
}