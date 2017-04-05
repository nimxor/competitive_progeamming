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

int hash[1001];

int main()
{
    mset(hash,0);
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        hash[a[i]]++;
    }


    int cn=0,sum=0;
    for(i=1;i<=1001;i++){
        cn=0;
        for(j=1;j<=1001;j++){
            if(hash[j]){
                hash[j]--;
                cn++;
            }
        }
        if(cn==0)   break;
        if(cn>1)
            sum+=(cn-1);
    }

    cout<<sum<<endl;
    return 0;
}