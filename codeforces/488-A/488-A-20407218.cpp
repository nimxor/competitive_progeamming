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
const int MAXM = 1e5+5;

bool check(ll n)
{
    if(n<0) n=-n;
    while(n!=0){
        int p=n%10;
        if(p==8)    return false;
        n/=10;
    }
    return true;
}

int main()
{
    ll a;
    cin>>a;
    ll x= a;
    a++;
    while(check(a)){
        ++a;
    }
    cout<<abs(a-x)<<endl;
    return 0;
}