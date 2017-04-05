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
const int MAXM =1e6+10;


int main()
{
    int n,i,j,k;
    cin>>n;
    string s[n];

    for(i=0;i<n;i++)
        cin>>s[i];

    ll ans=0;
    for(i=0;i<n;i++)
    {
        ll cnt=0;
        for(j=0;j<n;j++)
        {
            if(s[i][j]=='C')
                cnt++;
        }
        ans+=(1ll*cnt*(cnt-1))/2;
    }   

    for(i=0;i<n;i++)
    {
        ll cnt=0;
        for(j=0;j<n;j++)
        {
            if(s[j][i]=='C')
                cnt++;
        }
        ans+=(1ll*cnt*(cnt-1))/2;
    }

    cout<<ans<<endl;
    return 0;
}