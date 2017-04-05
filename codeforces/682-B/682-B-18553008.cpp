#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
const int MAXM= 100001;

ll ab[MAXM];

int main()
{
    ll n,i,j,k,tt;
    cin>>n;
    ll a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    i=1;
    for(j=0;j<n;j++)
    {
        if(i<=a[j])
            i++;
    }

    cout<<i<<endl;
    return 0;
}