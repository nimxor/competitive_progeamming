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
const int MAXN = 1e6+5;

int main()
{
    ll n,c,i,j,k,s;
    cin>>n>>c;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    s=1;
    for(i=1;i<n;i++){
        if((a[i]-a[i-1])<=c){
            s++;
        }else{
            s=1;
        }
    }

    cout<<s<<endl;
    return 0;
}