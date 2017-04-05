#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a[10010],p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
            p=a[i];
    }
    
    sort((a+1),a+n);
    
    int t=0;
    
    while(p<=a[n-1])
    {
        t++;
        p++;
        a[n-1]--;
        sort(a+1,a+n);
    }
    
    cout<<t<<endl;
    return 0;
}