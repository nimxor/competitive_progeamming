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
#define MAXM 5010


int main()
{
    int n,m,i,j,k,x;
    char ch;
    cin>>n>>x;
    ll sum=x,cnt=0;
    for(i=0;i<n;i++)
    {
        cin>>ch>>k;
        if(ch=='+')
            sum+=k;
        else{
            if(sum>=k){
                sum-=k;
            }
            else
                cnt++;
        }
    }
    cout<<sum<<" "<<cnt<<endl;
    return 0;
}