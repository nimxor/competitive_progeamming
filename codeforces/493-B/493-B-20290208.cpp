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
const int MAXM  = 1e2+3;
vector<int> v1,v2;

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    ll sum1=0,sum2=0;
    for(i=0;i<n;i++)
        cin>>a[i];

    int last=0;
    for(i=0;i<n;i++){
        if(i==n-1 && a[i]<0)  last=2;
        else if(i==n-1 && a[i]>0)   last=1;
        if(a[i]>0){
            v1.pb(a[i]);
            sum1+=1LL*a[i];
        }else{
            v2.pb(-a[i]);
            sum2+=1LL*(-a[i]);
        }
    }

    if(sum1>sum2){
        cout<<"first"<<endl;
    }else if(sum2>sum1){
        cout<<"second"<<endl;
    }else{
        int f=0;
        for(i=0;i<min((int)v2.size(),(int)v1.size()) && !f;i++){
            if(v1[i]>v2[i]){
                f=1;
                cout<<"first"<<endl;
            }else if(v1[i]<v2[i]){
                f=1;
                cout<<"second"<<endl;
            }
        }
        if(!f){
            if((int)v1.size()>(int)v2.size()){
                cout<<"first"<<endl;
                f=1;
            }else if((int)v1.size()<(int)v2.size()){
                cout<<"second"<<endl;
                f=1;
            }
        }
        if(!f){
            if(last==1){
                cout<<"first"<<endl;
            }else{
                cout<<"second"<<endl;
            }
        }
    }
    return 0;
}