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
 
const int MAXM=1e5+2;
ll a[MAXM];

int main()
{
    string s;
    int i,j,k;
    cin>>s;
    int n = s[1]-'0';
    char ch=s[0];

    if(s=="a8" || s=="h8" || s=="a1" || s=="h1"){
        cout<<3<<endl;
    }else if((n>=2 && n<=7) && (ch>='b' && ch<='g')){
        cout<<8<<endl;
    }else{
        cout<<5<<endl;
    }
    return 0;
}