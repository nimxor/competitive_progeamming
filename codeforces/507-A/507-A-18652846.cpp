#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define MAXM 1000


int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    int a[n],b[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i+1]=a[i];
    }

    sort(a,a+n);
    vector<int> v;
    int sum=0,cnt=0;
    i=0;
    while(sum<=m){
        if(sum+a[i]>m && i<n)  break;
        v.pb(a[i]);
        sum+=a[i++];
        cnt++;
        if(cnt==n)  break;
    }
    cout<<cnt<<endl;
    int visit[100100];
    mset(visit,0);
    vector<int> vv;
    for(i=0;i<v.size();i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==b[j] && !visit[j]){
                visit[j]=1;
                vv.pb(j);
                break;
            }
        }
    }

    for(i=0;i<vv.size();i++)
        cout<<vv[i]<<" ";
    cout<<endl;
    return 0;
}