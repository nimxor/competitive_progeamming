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
#define pii pair<int,int>

const int MAXM  = 1e5+10;
int a[MAXM];
int b[MAXM],c[MAXM],sm[MAXM];

int main()
{
    string s;
    int i,j,k,n,m,l,r;

    cin>>s;

    n=s.length();
    for(i=0;i<n;i++){
        if(s[i]==s[i-1]){
            sm[i+1] = sm[i]+1;
        }else  {
            sm[i+1] = sm[i];
        }
    }

    cin>>m;

    while(m--)
    {
        cin>>l>>r;
        cout<<sm[r]-sm[l]<<endl;
    }
    return 0;
}