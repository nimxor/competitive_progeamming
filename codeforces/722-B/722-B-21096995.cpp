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
#define sz 64

const ll maxi = 1e17;
const int MAXM = 110;
const int MAXN = 5e2+5; 

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin.ignore();
    int ans=0;
    for(i=0;i<n;i++){
        int cn=0;
        getline(cin,s);
        for(j=0;j<s.length();j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='y'){
                cn++;
            }
        }
        if(cn==a[i])    ans++;
    }
    if(ans==n)  cout<<"YES\n";
    else    cout<<"NO\n";
    return 0;
}