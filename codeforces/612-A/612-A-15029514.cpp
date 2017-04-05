#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,i,j,p,q,k;
    string s;
    cin>>n>>p>>q;
    k=n;
    cin>>s;
    int cnt1=0,cnt2=0,f=0;
    
    while(n>=0)
    {
        if(n%q==0)
        {
            cnt2+=n/q;
            f=1;
            break;
        }
        n-=p;
        cnt1++;
    }
    
    if(cnt1*p==k)
        f=1;
    
    int cn1=0,cn2=0;
        
        if(f==1)
        {
            cout<<cnt1+cnt2<<endl;
            i=0;
            if(cnt1)
            for(i=0;i<k;)
            {
                cout<<s.substr(i,p)<<endl;
                i+=p;
                cn1++;
                if(cn1==cnt1)
                    break;
            }
            
            if(cnt2)
            for(;i<k;)
            {
                cout<<s.substr(i,q)<<endl;
                i+=q;
                cn2++;
                if(cnt2==cn2)
                    break;
            }
        }
        else
            printf("-1\n");
    
    return 0;
}

/*
10 9 5
Codeforces
*/