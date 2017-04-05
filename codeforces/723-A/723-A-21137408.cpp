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
const int MAXM = 1e2+5;
const int MAXN = 5e2+5; 


int main()
{
    int n,i,j,k;
    n=3;
    int a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }    
    sort(a+1,a+1+n);
    int x = a[n/2+1];
    int su=0;
    for(i=1;i<=n;i++){
        su+=abs(a[i]-x);
    }
    cout<<su<<endl;
    return 0;
}