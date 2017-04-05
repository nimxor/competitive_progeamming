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
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1) break;
    }

    int p=0;
    for(k=n-1;k>=0;k--){
        if(a[k]==1){
            p=k;
            break;
        }
    }

    int cn=0,f=1;
    for(j=i;j<=k;j++){
        if(a[j]==0 && f==0) continue;
        if(a[j]==1){
            cn++;
            f=1;
        }
        if(a[j]==0){
            f=0;
            cn++;
        }
    }
    cout<<cn<<endl;
    return 0;
}