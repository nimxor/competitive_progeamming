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

const int MAXM  = 1e5+2;

int main()
{
    int n,i,j,k;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }

    int f=0;
    for(i=0;i<n;i++){
        if(s[i][0]=='O' && s[i][1]=='O'){
            f=1;
            s[i][0]='+';
            s[i][1]='+';
            break;
        }
        else if(s[i][3]=='O' && s[i][4]=='O'){
            f=1;
            s[i][3]='+';
            s[i][4]='+';
            break;
        }
    }

    if(f==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        for(i=0;i<n;i++){
            cout<<s[i]<<endl;
        }
    }
    return 0;
}