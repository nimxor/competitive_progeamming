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
 
const int MAXM=3e5+2;
int a[MAXM];
bool prime[MAXM];
vector<int> v;

ll dp[10000008];

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    if(!(n&1))
        cout<<a[(n/2)-1]<<endl;
    else
        cout<<a[n/2]<<endl;
    return 0;
}