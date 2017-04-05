#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a) 

#define ll long long


ll convert(int a[],int b,int n)
{
    ll ans=a[n-1];
    //cout<<ans<<endl;
    int i,j,k;
    ll c=b;
    for(i=n-2;i>=0;i--)
    {
        ans+=a[i]*c;
        //cout<<ans<<endl;
        c=c*b;
    }
    return ans;
}


int main()
{
    
    int n,b,i,j,k;
    
    cin>>n>>b;
    int a[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int m,b1;
    cin>>m>>b1;
    int c[m];
    
    for(i=0;i<m;i++)
        cin>>c[i];
        
    ll p1=convert(a,b,n);
    ll p2=convert(c,b1,m);
    
    //cout<<p1<<" "<<p2<<endl;
    
    if(p1>p2)
        cout<<'>'<<endl;
    else if(p1<p2)
        cout<<'<'<<endl;
    else
        cout<<'='<<endl;
    
    return 0;
}

/*
6 2
1 0 1 1 1 1
2 10
4 7
*/