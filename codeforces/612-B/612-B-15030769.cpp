#include<bits/stdc++.h>
using namespace std;

#define ll long long

pair<int,int> p[200010];

int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p[i].first;
        p[i].second=i;
    }
    
    sort(p,p+n+1);
    
    ll sum=0;
    for(i=2;i<=n;i++)
    {
        sum+=abs(p[i].second-p[i-1].second);
    }
    
    cout<<sum<<endl;
    
    return 0;
}


/*
5
1 3 5 4 2
*/