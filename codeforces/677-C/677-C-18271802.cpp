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
#define MAXM 1000000001

map<char,int> m;
int a[64]={0};

void humtum()
{
    for(int i=0;i<=9;i++)
    {
        m[i+'0']=i;
    }
    for(int i=0;i<26;i++)
    {
        m[i+'A']=i+10;
        m[i+'a']=i+36;
    }
    m['-']=62;
    m['_']=63;
}

void jhaat()
{
    for(int i=0;i<=63;i++)
    {
        for(int j=0;j<=63;j++)
        {
            a[i&j]++;
        }
    }
}

void solve()
{
    string s;
    int i,j,k;
    cin>>s;

    ll ans=1;

    for(int ii=0;ii<s.size();ii++)
    {
        int x = m[s[ii]];
        // cout<<x<<endl;
        ll cnt=a[x];
        ans = ans*cnt;
        if(ans>=mod)    ans%=mod;
    }    
    cout<<ans<<endl;
} 

int main()
{
    jhaat();
    humtum();
    solve();
    return 0;
}