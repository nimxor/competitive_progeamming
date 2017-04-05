#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
 
const int MAXM = 1e6;


int main()
{
    ll t,s,x,i,j,k;
    cin>>t>>s>>x;
    if(x<t){
        cout<<"NO"<<endl;
    }
    else if(x==t){
        cout<<"YES"<<endl;
    }
    else{
        x=x-t;
        if(x%s==0 || (((x-1)%s==0)) && (x-1)!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}