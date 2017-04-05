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
int b[MAXM],c[MAXM];

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;

    for(i=1;i<=n;i++){
        cin>>a[i];
    }    

    for(i=n;i>=1;i--){
        if(b[a[i]]==0){
            b[a[i]]=1;
            c[i] = c[i+1]+1;
        }else{
            c[i] = c[i+1];
        }
    }

    while(m--)
    {
        cin>>k;
        cout<<c[k]<<endl;
    }
    return 0;
}