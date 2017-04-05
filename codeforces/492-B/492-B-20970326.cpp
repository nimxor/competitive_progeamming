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
#define double long double

ll a[10010],n,le,k;

bool check(double x)
{
    double left=0.0,right=0.0;
    for(int i=0;i<n;i++){
        double xx = right;
        if(xx<(a[i]-x))   return false;
        right = a[i]+x;
    }   
    if(right<le)    return false;
    return true;
}

int main()
{
    ll i,j;
    cin>>n>>le;
    for(i=0;i<n;i++){
        cin>>a[i];
    }    

    sort(a,a+n);

    double l=0,r=le+10;

    double ans=-1;
    int iter = 500;
    while(iter--)
    {
        double mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            r = mid;
        }else{
            l=mid;
        }
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}