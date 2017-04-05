#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e6+5;
const int MAXN = 5e2+5;
int x,y,n,i,j,k;
int main()
{
    cin>>x>>y>>n;
    ll a[6]={x-y,x,y,y-x,-x,-y};

    n=n%6;
    cout<<(a[n]+mod+mod)%mod<<endl;
    return 0;
}