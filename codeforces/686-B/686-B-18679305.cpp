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
#define MAXM 105

bool visit[MAXM];
int a[MAXM],b[MAXM];

void swap1(int y,int x)
{
    for(int i=x;i>y;i--){
        cout<<i-1<<" "<<i<<endl;
        swap(a[i-1],a[i-2]);
    }
}

int main()
{
    mset(visit,false);
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b,b+n);

    ll cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]==b[i]){
                swap1(i+1,j+1);
                break;
            }
        }
    }
    return 0;
}