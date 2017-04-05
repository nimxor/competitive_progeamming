#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scf(a) scanf("%f",&a)
#define ll long long

ll a[200010];

int main()
{
    int n,i,j,k;
    ll minx=1000000101;
    sc(n);
    for(i=0;i<n;i++)
    {
        scl(a[i]);
        if(a[i]<minx)
            minx=a[i];
    }
    
    for(i=0;i<n;i++)
    {
        a[i]-=minx;
    }

    int cnt=0,maxm=0,f=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            maxm=max(maxm,cnt);
            cnt=0;
            f=1;
            continue;
        }
        if(f==1)
        {
            cnt++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            break;
        else
            cnt++;
    }
    
    maxm=max(maxm,cnt);
    
    cout<<maxm+(minx*n)<<endl;
    
    return 0;

}

/*
2
10 1
5 5

*/