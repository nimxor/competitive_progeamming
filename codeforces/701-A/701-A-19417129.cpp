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

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>k;
        v.pb({k,i});
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size()/2;i++){
        cout<<v[i].se<<" "<<v[n-i-1].se<<endl;
    }
    return 0;
}