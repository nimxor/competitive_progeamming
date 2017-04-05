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
    ll n,k,i,j;
    cin>>n>>k;
    ll p=ceil((double)n/k);
    if(p==n/k){
        cout<<(p+1)*k<<endl;
    }
    else{
        cout<<p*k<<endl;
    }       
}
 
int main()
{
    solve();
    return 0;
}