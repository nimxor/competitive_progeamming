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
#define MAXM 1000000001

void solve()
{
    string s;
    cin>>s;
    int i,j,k;
    int n=s.length();
    string str1="";
    str1+=s[0];
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            char ch1=s[i]+1;
            char ch2=s[i]+2;
            char ch3=s[i]-1;
            char ch4=s[i]-2;
            if(i+1<n){
                if(ch1<='z' && ch1>='a' && s[i+1]!=ch1)
                    str1+=ch1;
                else if(ch2<='z' && ch2>='a' && s[i+1]!=ch2)
                    str1+=ch2;
                else if(ch3<='z' && ch3>='a' && s[i+1]!=ch3)
                    str1+=ch3;
                else if(ch4<='z' && ch4>='a' && s[i+1]!=ch4)
                    str1+=ch4;
            }
            else{
                if(ch1<='z' && ch1>='a')
                    str1+=ch1;
                else if(ch2<='z' && ch2>='a')
                    str1+=ch2;
                else if(ch3<='z' && ch3>='a')
                    str1+=ch3;
                else if(ch4<='z' && ch4>='a')
                    str1+=ch4;
            }
        }
        else
            str1+=s[i];

        s[i]=str1[i];
    }
    cout<<str1<<endl;
}
 
int main()
{
    solve();
    return 0;
}