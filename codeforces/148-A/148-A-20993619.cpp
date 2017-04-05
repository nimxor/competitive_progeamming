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


int main()
{
    int k,l,m,n,d;
    int i,j;
    cin>>k>>l>>m>>n>>d;
    int cn=0;
    for(i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            cn++;
    }
    cout<<cn<<endl;
    return 0;
}