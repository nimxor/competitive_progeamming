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
 
const int MAXM = 1e5+2; 
vector<pair<int,int> > v;
bool row[MAXM];
bool col[MAXM];
set<int> sr;
set<int> sc;

int main()
{
    int n,m,i,j,k,x,y;
    cin>>n>>m;
    mset(row,false);
    mset(col,false);
    ll ans=0;
    for(i=0;i<m;i++){
        cin>>x>>y;
        sr.insert(x);
        sc.insert(y);
        ans=(1ll*sc.size()*n);
        ans-=(1ll*sc.size()*sr.size());
        ans+=(1ll*sr.size()*n);
        cout<<(1ll*n*n)-ans<<" ";
    }
    return 0;
}