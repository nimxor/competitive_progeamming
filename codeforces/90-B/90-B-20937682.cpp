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
    int n,m,i,j,k;
    cin>>n>>m;

    string s[n],ss[n];
    for(i=0;i<n;i++){
        cin>>s[i];
        ss[i]=s[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            char ch=s[i][j];
            int f=0;
            for(k=j+1;k<m;k++){
                if(ch==s[i][k]){
                    f=1;
                    ss[i][k]='.';
                }
            }
            if(f)   ss[i][j]='.';
        }
    }


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            char ch=s[j][i];
            int f=0;
            for(k=j+1;k<n;k++){
                if(ch==s[k][i]){
                    f=1;
                    ss[k][i]='.';
                }
            }
            if(f)   ss[j][i]='.';
        }
    }

    string sss="";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ss[i][j]=='.')   continue;
            sss+=ss[i][j];
        }
    }

    cout<<sss<<endl;
    return 0;
}