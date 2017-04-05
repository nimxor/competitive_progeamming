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
const int MAXM = 1e2+5;
const int MAXN = 5e2+5; 

int main()
{
    int n,p,i,j,k;
    cin>>n>>p;
    string s;
    cin>>s;
    string ss=s;
    int l = s.length();
    if(p>l/2){
        p=l-p+1;
    }
    
    int t=-1,sum=0,su=0,pos=p-1;
    // cout<<p<<endl;
    for(i=p-1;i>=0;i--){
        if(s[i]==s[l-i-1]) {t++;}
        else{
            int x = min((s[i]-s[l-i-1]+26)%26,(s[l-i-1]-s[i]+26)%26);
            // cout<<i<<" "<<s[i]<<endl;
            s[i]=s[l-i-1];
            sum+=x;
            t++;
            sum+=t;
            // cout<<sum<<endl;
            t=0;
            pos=i;
        }
    }

    // cout<<sum<<endl;

    t=0;
    for(i=pos+1;i<l/2;i++){
        if(s[i]==s[l-i-1]) {t++;}
        else{
            int x = min((s[i]-s[l-i-1]+26)%26,(s[l-i-1]-s[i]+26)%26);
            s[i]=s[l-i-1];
            sum+=x;
            t++;
            sum+=t;
            t=0;
        }
    }

    // cout<<sum<<endl;

    pos = p-1;
    s=ss;
    t=-1;
    for(i=p-1;i<l/2;i++){
        if(s[i]==s[l-i-1]) {t++;}
        else{
            int x = min((s[i]-s[l-i-1]+26)%26,(s[l-i-1]-s[i]+26)%26);
            s[i]=s[l-i-1];
            su+=x;
            t++;
            su+=t;
            t=0;
            pos=i;
        }
    }

    // cout<<su<<endl;

    t=0;
    for(i=pos-1;i>=0;i--){
        if(s[i]==s[l-i-1]) {t++;}
        else{
            int x = min((s[i]-s[l-i-1]+26)%26,(s[l-i-1]-s[i]+26)%26);
            s[i]=s[l-i-1];
            su+=x;
            t++;
            su+=t;
            t=0;
        }
    }
    // cout<<su<<" "<<sum<<endl;
    cout<<min(su,sum)<<endl;

    return 0;
}