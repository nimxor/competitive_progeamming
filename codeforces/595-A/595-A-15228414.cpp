#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sc(a) scanf("%d",&a)
#define gc getchar_unlocked
#define scl(a) scanf("%lld",&a)
#define ll long long
#define all(c) c.begin(),c.end()
#define N 10010
            
int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    int cnt=0,p,q;
    while(n--)
    {
        for(i=0;i<m;i++)
        {
            cin>>p>>q;
            if(p==1 || q==1)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


/*
2 2
0 0 0 1
1 0 1 1
*/