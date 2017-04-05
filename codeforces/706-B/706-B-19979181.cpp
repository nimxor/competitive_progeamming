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
    int n,i,j,k,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)    cin>>a[i];
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x;
        x+=1;
        int idx=lower_bound(a,a+n,x)-a;
        cout<<idx<<endl;
    }
    return 0;
}