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
int a[MAXM],cc[MAXM],m[MAXM];
vector<int> v[MAXM];
 

int main()
{
    int n,i,j,k;
    cin>>n;
    int m=0,c=0;
    for(i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x>y) m++;
        else    if(y>x) c++;
    }

    if(m>c) cout<<"Mishka";
    else if(c>m)   cout<<"Chris";
    else    cout<<"Friendship is magic!^^";
    return 0;
}