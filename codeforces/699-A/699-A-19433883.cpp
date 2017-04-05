#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 786433
 
const int MAXM = 1e5+2; 
vector<int>v[MAXM]; 
bool visit[MAXM];



int main()
{
    int n,i,j,k;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(i=0;i<n;i++)    cin>>a[i];

    int minm=2e9;

    for(i=1;i<n;i++){
        if(s[i]=='L' && s[i-1]=='R'){
            int x = (a[i]-a[i-1])/2;
            minm=min(minm,x);
        }
    }

    if(minm==2e9)
        cout<<-1<<endl;
    else
        cout<<minm<<endl;
    return 0;
}