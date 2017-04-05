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
const int MAXM =5001;

pair<char,pair<int,int > > ans[MAXM];

int main()
{
    int n,i,j,k;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>ans[i].fi>>ans[i].se.fi>>ans[i].se.se;
    }

    // for(i=0;i<n;i++)
    // {
    //     cout<<ans[i].fi<<ans[i].se.fi<<ans[i].se.se<<endl;;
    // }    

    int cntm=0,cntf=0,maxm=0;
    for(i=0;i<5001;i++)
    {
        cntm=0;cntf=0;
        for(j=0;j<n;j++)
        {
            if(ans[j].se.fi<=i && ans[j].se.se>=i)
            {
                if(ans[j].fi=='F')  cntf++;
                else    cntm++;
            }
        }
        // // if(i==140)
        //     cout<<cntf<<" "<<cntm<<endl;
        int x=min(cntf,cntm);
        maxm=max(maxm,x);
    }

    cout<<2*maxm<<endl;
    return 0;
}