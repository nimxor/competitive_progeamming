#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a) 

#define ll long long

ll arr[61];
void pre()
{
    arr[0]=1;
    int i;
    for(i=1;i<=60;i++)
        arr[i]=2*arr[i-1];
}

int main()
{
    pre();
    
    ll i,j,k,n,m,a,b;
    cin>>a>>b;
    ll sum=0,cnt=0;
    
    for(i=0;i<=59;i++)
    {
        sum+=arr[i];
        for(j=0;j<i;j++)
        {
            ll x=sum-arr[j];
            if(x<=b && x>=a)
                cnt++;
            
        }
    }
    
    cout<<cnt<<endl;
    
    return 0;
}