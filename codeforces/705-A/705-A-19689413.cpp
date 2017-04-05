#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 23732
 
const int MAXM=1e5+3;


void print(vector<ll> v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;;
    cout<<endl;
} 

int main()
{
    string s1="I hate it";
    string s2="I love it";
    string s4="I love that ";
    string s3="I hate that ";

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==n){
            if(i%2){
                cout<<s1;
                return 0;
            }
            else{
                cout<<s2;
                return 0;
            }
        }
        if(i%2){
            cout<<s3;
        }else{
            cout<<s4;
        }
    }
    return 0;
}