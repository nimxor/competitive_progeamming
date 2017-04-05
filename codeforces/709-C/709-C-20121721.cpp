//All pair shortest path algo using floyd-warshell

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
 
const int MAXM=1e6+2;
int a[MAXM];

bool check(string s)
{
    for(int i=0;i<s.size();i++){
        if(s[i]!='a'){
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s;
    int i,j,k,n,m;
    cin>>s;
    int f=0;

    if(check(s)){
        for(i=0;i<s.length()-1;i++){
            cout<<s[i];
        }
        cout<<'z';
        return 0;
    }

    for(i=0;i<s.length();i++){
        if(s[i]=='a')   break;
        else{
            f=1;
            s[i]=s[i]-1;
        }
    }

    if(f){
        cout<<s<<endl;
        return 0;
    }

    j=i+1;
    while(j<s.length()){
        for(;j<s.length();j++){
            if(s[j]=='a') { break; }
            else{
                s[j]=s[j]-1;
                f=1;
            }
        }
        if(f)   break;
        j+=1;
    }

    cout<<s<<endl;
    return 0;
}