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
vector<int> v;

ll a[1234567];

int main()
{
    ll n,i,j,k;
    cin>>n;
    for(i=0;i<=n;i++){
        a[i]=0;
    }
    for(i=1;i<=n;i++){
        cin>>k;
        a[i]=k+ a[i-1];
    }
    ll p = a[n]/3;
    ll q = 2*p;

    ll cn=0,ans=0;
    if(a[n]%3==0){
        for(i=1;i<n;i++){
            if(a[i]==q){
                ans+=cn;
            }
            if(a[i]==p){
                cn++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}