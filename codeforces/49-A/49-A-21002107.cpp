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
vector<int> v;

int main()
{
    int i,j,k;
    string s;
    // cin.ignore();?
    getline(cin,s);
    for(i=s.length()-1;i>=0;i--){
        // cout<<"hel"<<endl;
        if(s[i]=='?' || s[i]==' ')  continue;
        else{
            if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='o' || s[i]=='O' || s[i]=='i' || s[i]=='I' || s[i]=='y' || s[i]=='Y' || s[i]=='u' || s[i]=='U'){
                cout<<"YES";
                return 0;
            }else{
                cout<<"NO";
                return 0;
            }
        }
    }
    return 0;
}