#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a) 

#define ll long long

pair<int,int> p[10001];

bool cmp(const pair<int,int> &l, const pair<int,int> &r)
{
    return l.first>r.first;
}

int main()
{
    int i,j,k,n,m;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    
    sort(p,p+n,cmp);
    
    /*for(i=0;i<n;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;;*/
        
    int sum=0,y=m;
    
    for(i=0;i<n;i++)
    {
        int x=p[i].first;
        sum=max(p[i].second,sum+y-x);
        //cout<<sum<<endl;
        y=p[i].first;
    }
    sum+=p[n-1].first;
    
    cout<<sum<<endl;    
    
    return 0;
}