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

 
int main()
{
    ll i,j,k,n,m;
    cin>>n;
    for(i=0;i<100000;i++)
    {
        ll q=n-i*1234567;
        if(q<0) break;
        if(!q){
            cout<<"YES"<<endl;
            return 0;
        }
        for(j=0;j<10000;j++)
        {
            m=q-j*123456;
            if(m<0) break;
            if(!m){
                cout<<"YES"<<endl;
                return 0;
            }
            ll x=m/1234;
            if(m == x*((ll)(1234)))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}