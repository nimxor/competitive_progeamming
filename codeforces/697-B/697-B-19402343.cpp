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
 
const int MAXM = 1e6;
int x=0;

void convert(string s)
{
    for(int i=0;i<s.length();i++){
        x=x*10+(s[i]-'0');
    }
}

int main()
{
    string s;
    int i,j,k;
    cin>>s;

    string d="";
    for(i=0;i<s.length();i++){
        if(s[i]=='e')  break;
        d+=s[i];  
    }

    for(i=0;i<d.length();i++){
        if(d[i]=='.' || d[i]=='0')    continue;
        else    break;
    }

    if(i==d.length()){
        cout<<0<<endl;
        return 0;
    }

    int n=s.length();
    for(i=0;i<n;i++){
        if(s[i]=='.')   break;
    }
    i++;
    int cnt=0;
    for(;i<n;i++){
        if(s[i]=='e')   break;
        cnt++;
    }
    string p="";
    i++;
    for(;i<n;i++){
        p+=s[i];
    }
    convert(p);
    if(x==0){
        string l="";
        for(i=0;i<s.length();i++){
            if(s[i]=='e')   break;
            l+=s[i];
        }
        // cout<<l<<endl;

        string g="";
        n=l.length();
        for(i=0;i<n;i++){
            if(l[i]=='.')   break;
        }

        for(j=0;j<i;j++){
            if(l[j]!='0')   break;      
        }

        for(;j<i;j++){
            g+=l[j];
        }

        for(k=n-1;k>=0;k--){
            if(l[k]!='0')   break;
        }

        if(i<k)
        for(j=i;j<=k;j++){
            g+=l[j];
        }

        if(g[0]=='.')   g="0"+g;
        cout<<g<<endl;

        return 0;
    }
    // cout<<cnt<<" "<<x<<endl;
    string l="";
    if(cnt>x){
        for(i=0;i<n;i++){
            if(s[i]=='.')   break;
            l+=s[i];
        }
        i++;
        int cn=0;
        for(;i<n;i++){
            if(cn==x)   break;
            cn++;
            l+=s[i];
            if(cn==x)    break;
        }
        l+='.';
        i++;
        for(;i<n;i++){
            if(s[i]=='e')   break;
            l+=s[i];
        }
    }
    else if(cnt==x){
        for(i=0;i<n;i++){
            if(s[i]=='.')   continue;
            if(s[i]=='e')   break;
            l+=s[i];
        }
    }
    else{
        int ex=x-cnt;
        for(i=0;i<n;i++){
            if(s[i]=='.')   continue;
            if(s[i]=='e')   break;
            l+=s[i];
        }
        for(i=0;i<ex;i++){
            l+='0';
        }
    }

    string g="";
    n=l.length();
    for(i=0;i<n;i++){
        if(l[i]=='.')   break;
    }

    for(j=0;j<i;j++){
        if(l[j]!='0')   break;      
    }

    for(;j<i;j++){
        g+=l[j];
    }

    for(k=n-1;k>=0;k--){
        if(l[k]!='0')   break;
    }

    if(i<k)
    for(j=i;j<=k;j++){
        g+=l[j];
    }

    if(g[0]=='.')   g="0"+g;
    cout<<g<<endl;
    return 0;
}