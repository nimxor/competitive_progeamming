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
    int n,i,j,k,p,q,l;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    
    int maxx=0,sum=0;
    int cnt=0;      
    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                cnt=0;
                int f=0;
                for(l=0;l<s[k].length();l++)
                {
                    if(s[k][l]==(i+'a') || s[k][l]==(j+'a'))
                    {
                        cnt++;
                    }
                    else 
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    sum+=cnt;
            }
            if(sum>maxx)
                maxx=sum;
        }
    }
    
    cout<<maxx<<endl;
    
    return 0;
}


/*
4
abb
cacc
aaa
bbb
*/