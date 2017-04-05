#include<bits/stdc++.h>
//#define vector<pair<ll,ll> >vpll
#define ll long long
using namespace std;
int main()
{
    vector<pair<ll,ll> >v;
    int n,i,j,k;
    ll d,m,s,a,b;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    
    ll maxx=0,maxm=v[0].second;
    j=1;
    for(i=0;i<n;i++)
    {
        //maxm=max(maxx,v[i].second);
        while(j<n && (v[j].first-v[i].first)<d)
        {
            maxm+=v[j].second;
            j++;
        }
        maxx=max(maxm,maxx);
        maxm-=v[i].second;
    }
    cout<<maxx<<endl;
    return 0;
}