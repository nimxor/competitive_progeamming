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

const int MAXM=1e5+3;
vector<int> v[MAXM];


int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n],f=0;
    if(n==1){
        cin>>k;
        if(k==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        return 0;
    }else{
        for(i=0;i<n;i++){
        cin>>k;
        if(k==1)    f++;
    }
    }
    if(f==n-1)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}