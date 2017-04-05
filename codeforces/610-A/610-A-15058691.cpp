#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scf(a) scanf("%f",&a)
#define ll long long

int main()
{
    ll i,j,k,n;
    cin>>n;
    if(n&1)
    {
        printf("0\n");
        return 0;
    }
    
    n/=2;
    
    if(n%2==1)
    {
        printf("%lld\n",n/2);
    }
    else
        printf("%lld\n",(n/2)-1);
    
    return 0;

}

/*
2
10 1
5 5

*/