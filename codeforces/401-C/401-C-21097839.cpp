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

ll a[1234567];

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    if(n*2+2<m || n>m+1){
        cout<<"-1\n";
        return 0;
    } 
    string s="";
    if(m>n){
        int f=0; 
        // if(m==4 && n==2){
        //     cout<<110101
        // }
        m-=2;
        int t;
        cout<<"11";
        if(m==n){
            t=1;
            f=1;
        }
        int p = n+m;
        if(f==0)
        for(i=0;i<p;i++){
            if(i%3==0){  cout<<"0"; n--; }
            if(m==n){
                f=1;
                t=0;
                break;
            }
            if(i%3==1){  cout<<"1"; m--; }
            if(m==n){
                f=1;
                t=1;
                break;
            }
            if(i%3==2){  cout<<"1"; m--; }
            if(m==n){
                f=1;
                t=1;
                break;
            }
        }
        // cout<<m<<" "<<n<<endl;
        if(f==1)
        for(i=0;i<(m+n);i++){
            t=1-t;
            if(i%2==0) { cout<<t; }
            else    cout<<t;
        }
    }else{
        for(i=0;i<n+m;i++){
            if(i&1) cout<<"1";
            else    cout<<"0";
        }
    }
    return 0;
}