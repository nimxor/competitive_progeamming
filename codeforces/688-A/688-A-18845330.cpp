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
 
const int MAXM = 1e3+5;

int a[MAXM];

int main()
{
    int n,d,i,j,k;
    char ch;
    cin>>n>>d;
    int cnt=0,maxm=0;
    for(i=1;i<=d;i++)
    {
        int f=1;
        for(j=1;j<=n;j++)
        {
            cin>>ch;
            if(ch=='0' && f){
                f=0;
                cnt++;
            }
        }
        if(!f)
        {
            maxm=max(maxm,cnt);
        }
        else{
            maxm=max(maxm,cnt);
            cnt=0;
        }
    }
    maxm=max(maxm,cnt);
    cout<<maxm<<endl;
    return 0;
}