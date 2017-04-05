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


void solve()
{
    int n,a,i,j,k;
    cin>>n>>a;
    int s[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    int cnt=0;
    
    i=a,j=a;
    while(i>0 && j<=n)
    {
        if(i==a && j==a && s[i]==1)
            cnt++;
        else if(s[i]==1 && s[j]==1)
            cnt+=2;
        i--;j++;
    }

    // cout<<i<<" "<<j<<endl;
    while(i>0){
        if(s[i]==1){
            cnt++;
        }
        i--;
    }
    while(j<=n){
        if(s[j]==1)
            cnt++;
        j++;
    }
    cout<<cnt<<endl;
}
 
int main()
{
    solve();
    return 0;
}