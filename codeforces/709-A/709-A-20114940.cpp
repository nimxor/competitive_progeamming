//All pair shortest path algo using floyd-warshell

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
 
const int MAXM=1e6+2;
int a[MAXM];

int main()
{
    int n,m,k,i,j,c=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(i=0;i<n;i++){
        if(a[i]>m)  continue;
        else{
            sum+=a[i];
            if(sum>k){
                c++;
                sum=0;
            }
        }
    }

    cout<<c<<endl;
    return 0;
}