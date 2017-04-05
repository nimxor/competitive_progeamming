#include <iostream>
#include<bits/stdc++.h>
#define scl(a) scanf("%lld",&a)
#define ll long long
using namespace std;
#define mod 1000000007

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    ll sum=0;
    for(int i=n-1;i>=0;i--)
    {
        sum+=a[i];
        cnt++;
        if(sum>=m)
            break;        
    }
    printf("%d\n",cnt);
    return 0;
}