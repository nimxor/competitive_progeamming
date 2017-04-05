#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
const int MAXM= 100001;

int main()
{
    ll x,y,i,j,k;
    cin>>x>>y;
    ll cnt=0;
    for(i=1;i<=x;i++)
    {
        ll f=i%5;
        cnt+=(f+y)/5;
    }
    cout<<cnt<<endl;
    return 0;
}