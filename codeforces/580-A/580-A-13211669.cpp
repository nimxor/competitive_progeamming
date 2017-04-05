#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    long long a[100010];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxx=0;
    j=1;
    for(i=1;i<n;i++)
    {
        if(a[i-1]<=a[i])
            j++;
        else
        {
            maxx=max(j,maxx);
            j=1;
        }
    }
    maxx=max(j,maxx);
    cout<<maxx<<endl;
    return 0;
}