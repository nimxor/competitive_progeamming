#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 5e2+5; 


int main()
{
    int n,m,k,i,j;
    cin>>n>>m>>k;
    int t=0,cn=0;
    vector<int> v;
    for(i=1;i<=n;i++){
        if(t==0){
            for(j=1;j<=m;j++){
                if(j==m)    t=1;
                v.pb(i);
                v.pb(j);
                if(v.size()==4 && cn<k-1){
                    cout<<2<<" "; 
                    for(int p=0;p<v.size();p++){
                        cout<<v[p]<<" ";
                    }
                    cout<<endl;
                    cn++;
                    v.clear();
                }
            }
        }
        else{
            for(j=m;j>=1;j--){
                if(j==1)    t=0;
                v.pb(i);
                v.pb(j);
                if(v.size()==4 && cn<k-1){
                    cout<<2<<" "; 
                    for(int p=0;p<v.size();p++){
                        cout<<v[p]<<" ";
                    }
                    cout<<endl;
                    cn++;
                    v.clear();
                }
            }
        }
    }
    cout<<v.size()/2<<" ";
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}