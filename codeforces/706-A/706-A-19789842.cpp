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
double n,m,x,y;

double dist()
{
    return sqrt(((x-n)*(x-n))+((y-m)*(y-m)));
}

int main()
{
    int i,j,k,z;
    double v;
    cin>>n>>m;
    cin>>k;
    double minm=100101991.0;
    while(k--)
    {
        cin>>x>>y>>v;
        minm=min((dist()/v),minm);
    }
    printf("%0.6lf",minm);
    return 0;
}