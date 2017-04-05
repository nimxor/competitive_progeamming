#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a) 

#define ll long long

int dp[501][501];
int dp1[501][501];
char a[501][501];

int main()
{
    int r,c,x1,x2,y1,y2,q;
    int i,j,k;
    
    cin>>r>>c;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    
    
    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }*/
    
    
    for(i=0;i<r;i++)
    {
        dp[i][0]=0;
        for(j=1;j<c;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(a[i][j]=='.' && a[i][j-1]=='.')
                dp[i][j]++;
        }
    }
    
    
    
    for(i=0;i<c;i++)
    {
        dp1[0][i]=0;
        for(j=1;j<r;j++)
        {
            dp1[j][i]=dp1[j-1][i];
            if(a[j][i]=='.' && a[j-1][i]=='.')
                dp1[j][i]++;
        }
    }
    
    /*for(i=0;i<r;i++)
    {
        
        for(j=0;j<c;j++)
        {
            dp[i][j]+=dp1[i][j];
        }
    }*/
    cin>>q;
    while(q--)
    {
        cin>>x1>>y1>>x2>>y2;
    
        x1--;x2--;
        y1--;y2--;
        int sum=0;
        for(i=x1;i<=x2;i++)
        {
            sum+=dp[i][y2]-dp[i][y1];
        }
        
        for(i=y1;i<=y2;i++)
        {
            sum+=dp1[x2][i]-dp1[x1][i];
        }
        
        cout<<sum<<endl;
    
    }
    return 0;
}