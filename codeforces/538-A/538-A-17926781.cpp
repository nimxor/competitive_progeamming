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


int main()
{
    string s;
    cin>>s;

    string p="CODEFORCES";
    int i,j=0,k,jj=0,cnt=0;

    for(i=0;i<s.length();i++)
    {
        if(s[i]==p[j])
            j++;
        else
            break;
    }

    k=p.length()-1;

    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]==p[k]){
            if(cnt+j>=10)    break;
            k--,cnt++;
        }
        else
            break;
    }

    //cout<<j<<" "<<cnt<<endl;

    if(j+cnt==p.length())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}