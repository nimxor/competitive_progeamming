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
    int t,n,m,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   
    if(n==1 && a[0]<15 && a[0]!=0){
        cout<<-1<<endl;
    }else if(a[n-1]==0){
        cout<<"UP"<<endl;
    }    
    else if(a[n-1]==15){
        cout<<"DOWN"<<endl;
    }else if(a[n-2]<a[n-1] && a[n-1]<15){
        cout<<"UP"<<endl;
    }else if(a[n-2]>a[n-1] && a[n-1]<15){
        cout<<"DOWN"<<endl;
    }
    return 0;
}