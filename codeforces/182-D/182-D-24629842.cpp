#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 10+4;

string s1,s2,s;
int ans,i,j,l1,l2,n,minx;

bool judge()
{
    for(int k=0; k<i; ++k)
        for(int l=1; l<j; ++l)
            if(s[k+l*i]!=s[k]) return false;
    return true;
}

int main()
{
    cin>>s1>>s2;
    s=s1+s2;
    i=1;
    l1=s1.size();
    l2=s2.size();
    minx=min(l1,l2);
    while(i<=minx)
    {
        if(l1 % i==0 && l2 % i==0)
        {
            j=(l1+l2)/i;
            if(judge()) ++ans;
        }
        i++;
    }
    printf("%d\n",ans);
    return 0;
}