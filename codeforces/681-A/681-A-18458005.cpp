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
#define MAXM 1000000001

void solve()
{
    int n,i,j,k;
    int a,b;
    cin>>n;
    bool flag=false;
    string s;
    while(n--)
    {
        cin>>s>>a>>b;
        if(a>=2400)
        {
            if(b>a) 
                flag=true;
        }
    }
    if(flag)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}
 
int main()
{
    solve();
    return 0;
}