#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define MAXM 1000000001

void solve()
{
    ll n,h,k,i,j;
    cin>>n>>h>>k;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    ll sec=0,sum=a[0];
    for(i=1;i<n;i++)
    {
        if(sum+a[i]<=h)
            sum+=a[i];
        else
        {
            // while(sum+a[i]>h){
            //     sec++;
            //     sum-=k;
            //     if(sum<0)
            //         sum=0;
            // }
            ll p = ceil((double)(sum+a[i]-h)/k);
            sec+=p;
            sum -= (p*(k));
            if(sum<0)
                   sum=0; 
            sum+=a[i];
        }
    }
    // cout<<sum<<" "<<sec<<endl;
    sec += ceil((double)sum/k);
    cout<<sec<<endl;
}   

int main()
{
    solve();
    return 0;
}