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
const int MAXM = 1e2+5;
const int MAXN = 5e2+5; 

int minh,maxh,minm,maxm;

int main()
{
    int format ,i,j,k,hh,mm;
    cin>>format;
    minm=0;maxm=59;
    if(format==12){
        maxh=12;
        minh=1;
    }else{
        maxh=23;
        minh=0;
    }

    scanf("%d:%d",&hh,&mm);
    int ansh,ansm;
    int ans=100;
    for(i=minh;i<=maxh;i++){
        for(j=minm;j<=maxm;j++){
            int cn=0;
            if(i%10!=hh%10) cn++;
            if(i/10!=hh/10) cn++;
            if(j%10!=mm%10) cn++;
            if(j/10!=mm/10) cn++;
            if(ans>cn){
                ans=cn;
                ansh=i;
                ansm=j;
            }
        }
    }
     printf("%.2d:%.2d\n",ansh,ansm);
    return 0;
}