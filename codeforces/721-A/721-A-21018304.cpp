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
const int MAXM = 1e6+5;
const int MAXN = 5e2+5; 
vector<int> v;

int main()
{
    int n,i,j,k;
    cin>>n;
    string s;
    cin>>s;
    int f=0,cn=0,p=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='W'){
            if(p){
                v.pb(p);
            }   
            f=0;
            p=0;
            continue;
        }
        if(f==1){
            p++;
        }
        else{
            f=1;
            p++;
            cn++;
        }
    }
    if(p){
        v.pb(p);
    }

    cout<<cn<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}