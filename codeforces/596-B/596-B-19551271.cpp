#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 786433

const int MAXM=3e5+3;


int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
    }
    ll mm=0,cnt=0;
    for(i=0;i<n;i++){
    	cnt+=abs(a[i]-mm);
    	mm=a[i];
    }
    cout<<cnt<<endl;
    return 0;
}