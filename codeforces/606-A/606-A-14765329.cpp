#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scl(a) scanf("%lld",&a)

int main()
{
    int a,b,c,x,y,z,sum=0,sub=0;
    cin>>a>>b>>c>>x>>y>>z;
    if(a>x)
        sum+=(a-x)/2;
    else
        sub+=(x-a);
        
    if(b>y)
        sum+=(b-y)/2;
    else
        sub+=(y-b);
    
    if(c>z)
        sum+=(c-z)/2;
    else
        sub+=(z-c);
        
    if(sum>=sub)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}