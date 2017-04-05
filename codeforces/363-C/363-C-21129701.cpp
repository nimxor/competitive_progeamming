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
const int MAXM = 1e2+5;
const int MAXN = 5e2+5; 

int main()
{
    string s;
    int i,j,k,n;
    cin>>s;
    n=s.length();

    string ss="";
    ss+=s[0];
    int f=0,ff=-5;
    for(i=1;i<n;i++){
        if(s[i]==s[i-1] && f)   continue;
        if(s[i]==s[i-1] && !f){
            ss+=s[i];
            f=1;
        }else{
            f=0;
            ss+=s[i];
        }
    }

    f=0;
    s=ss;
    ss="";
    ss+=(s[0]);
    // cout<<s<<endl;
    n=s.length();
    for(i=1;i<n;i++){
        if(s[i]==s[i-1] && i==ff+2) continue;
        if(s[i]==s[i-1]){
            ss+=s[i];
            ff=i;
        }else{
            ss+=s[i];
        }
    }

    cout<<ss<<endl;
    return 0;
}