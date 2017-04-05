#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 23732
 
const int MAXM=1e5+3;


void print(vector<ll> v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;;
    cout<<endl;
} 

int main()
{
    int n,i,j;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(i=0;i<n;i++){
        cnt+=a[i]-1;
        cnt%=2;
        if(cnt==1)  cout<<1<<endl;
    else    cout<<2<<endl;
    }
    return 0;
}