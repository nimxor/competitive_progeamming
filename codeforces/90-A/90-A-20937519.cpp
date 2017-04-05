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

int main()
{
    int n,i,j,k,r,g,b;
    cin>>r>>g>>b;
    
    int sum=29,turn=0;
    while(r>0 || g>0 || b>0){
        turn++;
        if(turn%3==1){
            sum++;
            r-=2;
        }else if(turn%3==2){
            sum++;
            g-=2;
        }else{
            sum++;
            b-=2;
        }
    }

    cout<<sum<<endl;

    return 0;
}