#include<bits/stdc++.h>
using namespace std;

#define fi                    first
#define se                    second
#define ll                    long long
#define all(a)                a.begin(),a.end()
#define rall(a)               a.rbegin(),a.rend()  
#define MOD                   1000000007
#define mp                    make_pair
#define pb                    push_back
#define mset(m,v)             memset(m,v,sizeof(m))
#define print(i,s) cout<<"Case #"<<i<<": "<<s<<endl


const int MAXM = 1e3+3;
int a[MAXM];
map<string,int> m;
vector<string> v;

int main()
{
    ll n,a,b,c,i,j,k;
    cin>>n>>a>>b>>c;

    int p = (n/4+1)*4-n;

    if(p==4){
        cout<<0<<endl;
    } else if(p==1){
        cout<<min(a,min(3*c,b+c))<<endl;
    }else if(p==2){
        cout<<min(2*a,min(b,2*c))<<endl;
    }else{
        cout<<min(3*a,min(c,a+b))<<endl;
    }
	return 0;
}