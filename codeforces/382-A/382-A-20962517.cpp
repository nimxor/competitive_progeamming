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


int main()
{
    string a,b;
    int i,j,k,n;
    cin>>a>>b;
    int cn=0;

    for(i=0;i<a.length();i++){
        if(a[i]=='|')
            break;
        cn++;
    }

    string s1 = a.substr(0,cn);
    string s2 = a.substr(cn+1);

    // cout<<s1<<" "<<s2<<endl;

    int n1 = s1.length();
    int n2 = s2.length();

    if(n1<n2){
        s1+=b;
        if(s1.length()<s2.length()){
            cout<<"Impossible";
            return 0;
        }else{
            string ss = s1.substr(0,s2.length());
            string sr = s1.substr(s2.length());
            if(sr.length()&1) {
                cout<<"Impossible";
                return 0;
            }else{
                cout<<ss+sr.substr(0,sr.length()/2)<<"|"<<s2+sr.substr(sr.length()/2);
            }
        }

    }else{
        s2+=b;
        if(s1.length()>s2.length()){
            cout<<"Impossible";
            return 0;
        }else{
            string ss = s2.substr(0,s1.length());
            string sr = s2.substr(s1.length());
            if(sr.length()&1) {
                cout<<"Impossible";
                return 0;
            }else{
                cout<<s1+sr.substr(sr.length()/2)<<"|"<<ss+sr.substr(0,sr.length()/2);
            }
        }
    }



    return 0;
}