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
string s;



int main()
{
    int n,m,i,j,k;
    
    cin>>n>>m;
    ll sum=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int p=0,cn=0;
    for(i=0;i<n;i++){
        p+=a[i];
        if(p>m){
            p=0;
            cn++;
            i--;
        }
        if(p==m){
            p=0;
            cn++;
        }
    }

    if(p>0){
        cn+=1;
    }

    cout<<cn<<endl;
    return 0;
}