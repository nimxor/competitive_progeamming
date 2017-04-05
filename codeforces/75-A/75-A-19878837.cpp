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
 
const int MAXM = 2e5+2; 



int main()
{
    ll x , y;
    cin>>x>>y;
    ll sum=x+y;
    ll p=0,q=1,pp=0,qq=0;
    while(x!=0){
        int w=x%10;
        x/=10;
        if(w==0)    continue;
        p=p*10+w;
    }
    ll xx=p;
    p=0;
    while(xx!=0){
        int w=xx%10;
        xx/=10;
        if(w==0)    continue;
        p=p*10+w;
    }
    while(y!=0){
        int w=y%10;
        y/=10;
        if(w==0)    continue;
        pp=pp*10+w;
    }
    ll yy=pp;
    pp=0;
    while(yy!=0){
        int w=yy%10;
        yy/=10;
        if(w==0)    continue;
        pp=pp*10+w;
    }
    while(sum!=0){
        int w=sum%10;
        sum/=10;
        if(w==0)    continue;
        qq=qq*10+w;
    }
    ll ss=qq;
    qq=0;
    while(ss!=0){
        int w=ss%10;
        ss/=10;
        if(w==0)    continue;
        qq=qq*10+w;
    }
    // cout<<p<<" "<<pp<<" "<<qq<<endl;
    if(p+pp==qq){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}