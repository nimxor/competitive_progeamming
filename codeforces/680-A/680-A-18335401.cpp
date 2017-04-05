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
    int a[5];


    int n=5,i;

    for(i=0;i<5;i++)
        cin>>a[i];

    sort(a,a+n);

    int sum=0,minm=10010010;
    for(i=0;i<n;i++)    sum+=a[i];
    minm=min(sum,minm);    
    for(i=3;i>=0;i--)
    {
        if(a[i]==a[i+1])
            minm=min(minm,sum-(a[i]+a[i+1]));
    }
    for(i=2;i>=0;i--)
    {
        if(a[i]==a[i+1] && a[i]==a[i+2])
            minm=min(minm,sum-(a[i]+a[i+1]+a[i+2]));

    }
    cout<<minm<<endl;
}
 
int main()
{
    solve();
    return 0;
}