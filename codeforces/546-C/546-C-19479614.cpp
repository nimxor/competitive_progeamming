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

const int MAXM=1e5+3;
vector<int> v[MAXM];
queue<int> s1,s2;

int main()
{
    int n,i,j,k;
    cin>>n;
    int n1,n2;
    cin>>n1;
    for(i=1;i<=n1;i++){
        cin>>k;
        s1.push(k);
    }
    cin>>n2;
    for(i=1;i<=n2;i++){
        cin>>k;
        s2.push(k);
    }
    int cnt=0;
    while(1){
        if(s1.empty() || s2.empty())    break;  
        cnt++;
        int x1=s1.front();
        int x2=s2.front();
        s1.pop();
        s2.pop();
        if(x1>x2){
            s1.push(x2);
            s1.push(x1);
        }else{
            s2.push(x1);
            s2.push(x2);
        }
        if(cnt>10000)   break;
    }
    if(cnt>10000)   cout<<-1;
    else{
        if(s1.empty())
            cout<<cnt<<" 2";
        else
            cout<<cnt<<" 1";
    }
    return 0;
}