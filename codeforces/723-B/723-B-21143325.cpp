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
    int n,i,j,k;
    cin>>n;
    string s;
    cin>>s;
    int ans1=0,ans2=0;
    int f=0,cn=0;
    for(i=0;i<n;i++){
        if(s[i]==')') { f=0;cn=0;  continue; }
        if(f==1) {  cn=0;   continue; }
        if(s[i]=='(') { ans1=max(ans1,cn); cn=0;  f=1; }
        else{
            if(s[i]=='_'){
                ans1=max(ans1,cn);
                cn=0;
            }else{
                cn++;
            }
        }
    }

    ans1=max(ans1,cn);
    f=0;
    // cout<<ans1<<endl;
    cn=0;
    for(i=0;i<n;i++){
        if(s[i]==')')   {
              if(cn>0)  ans2++; 
              cn=0; f=0; continue;}
        if(f==1){  
            if(s[i]=='_'){
                if(cn>0)    ans2++;
                cn=0;
            }else{
                cn++;
            }
        }
        if(s[i]=='('){
            f=1;
            cn=0;
        }
    }

    cout<<ans1<<" "<<ans2<<endl;

    return 0;
}