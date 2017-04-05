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
const int MAXN = 1e6+5;
int a[26];

void init()
{
    for(int i=0;i<26;i++)   a[i]=0;
}

int main()
{
    string s;
    cin>>s;
    int i,j,k,n;
    n=s.length();
    int f=0;
    for(i=0;i<=n-26;i++){
        init();
        string p=s.substr(i,26);
        int cn=0;
        vector<int> v;
        if(p.length()==26)
        {
            for(j=0;j<26;j++){
                if(p[j]!='?'){
                    a[p[j]-'A']++;
                }else{
                    cn++;
                }
            }
            for(j=0;j<26;j++){
                if(a[j]){
                    cn++;
                }else{
                    v.pb(j);
                }
            }
            int pp=0;
            if(cn==26){
                for(j=i;j<i+26;j++){
                    if(s[j]=='?'){
                        s[j]='A'+v[pp++];
                    }
                }
                f=1;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(s[i]=='?')   s[i]='A';
    }
    if(!f)  cout<<-1<<endl;
    else    cout<<s<<endl;
    return 0;
}