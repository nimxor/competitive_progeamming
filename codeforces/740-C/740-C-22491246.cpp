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


const int MAXM = 1e5+3;
int a[MAXM];
map<string,int> m;
vector<string> v;

int main()
{
    int n,m,i,j,k=1e7,x,y;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>x>>y;
        k = min(k,y-x+1);
    }

    cout<<k<<endl;
    for(i=0;i<n;i++){
        cout<<i%k<<" ";
    }
	return 0;
}