#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(a) scanf("%d",&a)

int main()
{
    int area,n,x[4],y[4],i,j,k,f=0,a,b;
    sc(n);
    for(i=0;i<n;i++)
    {
        sc(x[i]);
        sc(y[i]);
    }
    
    if(n==3 || n==4)
        f=1;
    else if(n==2 && ((x[0]!=x[1])&&(y[0]!=y[1])))
        f=1;
    else
        f=0;
        
    if(f==0)
        area=-1;
    else if(f==1 && n==2)
        area=(abs(x[1]-x[0])*abs(y[1]-y[0]));
    else
    {
        if(x[0]!=x[1])
            a=abs(x[1]-x[0]);
        else if(x[0]!=x[2])
            a=abs(x[2]-x[0]);
            
        if(y[0]!=y[1])
            b=abs(y[1]-y[0]);
        else if(y[0]!=y[2])
            b=abs(y[2]-y[0]);
            
        area=a*b;
    } 
    
    printf("%d\n",area);
    
    return 0;
}