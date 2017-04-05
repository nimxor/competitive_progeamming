#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a) 

#define ll long long

int w[7]={52,52,52,52,53,53,52};
int y[]={31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int t,i,j,k;
    string b,c;
    cin>>k>>b>>c;
    if(c=="week")
    {
        k--;
        cout<<w[k]<<endl;
    }
    else
    {
        int cnt=0;
        for(i=0;i<12;i++)
        {
            if(y[i]>=k)
                cnt++;
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}