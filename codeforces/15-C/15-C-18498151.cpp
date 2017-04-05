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
const int MAXM =5001;

ll xorr(ll n)
{
    if(n%4==3)
        return n;
    else if(n%4==2)
        return 1;
    else if(n%2==1)
        return n-1;
    else
        return 0;
}

int main()
{
    int t,i,j,k;
    cin>>t;
    ll x=0,n,m;
    while(t--)
    {
        cin>>n>>m;
        x^=xorr(n+m)^xorr(n);
    }
    string s=(x==0) ? "bolik" : "tolik";
    cout<<s<<endl;
    return 0;
}