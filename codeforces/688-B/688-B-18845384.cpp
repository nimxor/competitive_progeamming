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
 
const int MAXM = 1e3+5;

int a[MAXM];

int main()
{
    string s,p;
    cin>>s;
    p=s;
    reverse(s.begin(),s.end());
    cout<<p+s<<endl;
    return 0;
}