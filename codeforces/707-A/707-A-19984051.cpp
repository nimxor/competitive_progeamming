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
 
const int MAXM=2e5+2;
int a[MAXM];

int main()
{
    int n,m,i,j,k,f=0;
    cin>>n>>m;
    char ch;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ch;
            if(ch=='M' || ch=='Y' || ch=='C' )
                    f=1;
        }
    }
    if(f)   cout<<"#Color";
    else    cout<<"#Black&White";
    return 0;
}