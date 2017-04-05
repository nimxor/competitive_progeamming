#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scf(a) scanf("%f",&a)
#define ll long long

ll a[200010];

int main()
{
    int n,t,i;
    cin>>n>>t;
    
    int a[n-1];
    
    for(i=0;i<n-1;i++)
        cin>>a[i];
        
    int sum=1,f=0;
    
    for(i=1;i<n;)
    {
        //cout<<i<<endl;
        if(i==t){
            f=1;
            break;
        }
        i+=a[i-1];
    }
    
    if(i==t)
    {
        f=1;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}

/*
2
10 1
5 5

*/