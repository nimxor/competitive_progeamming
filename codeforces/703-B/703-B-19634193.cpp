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
    ll n,k,i,j;
    cin>>n>>k;
    ll c[n+1],d[k+1];
    for(i=1;i<=n;i++)   cin>>c[i];

    ll a[k+1];
    for(i=1;i<=k;i++)   cin>>a[i];

    ll ans=0;
    for(i=2;i<=n;i++){
        ans+=(c[i]*c[i-1]);
    }

    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    if(n==2){
        cout<<ans<<endl;
        return 0;
    }

    ans+=c[1]*c[n];

    // cout<<ans<<endl;

    ll sum=0,sum1=0;
    for(i=1;i<=n;i++){
        sum+=c[i];
    }

    for(i=1;i<=k;i++){
        sum1+=c[a[i]];
    }


    if(n==3){
        cout<<ans<<endl;
        return 0;
    }

    ll p;
    for(i=1;i<=k;i++){
        if(a[i]==1){
            p=(sum-c[a[i]]-c[n]-c[2]); 
        }else if(a[i]==n){
            p=(sum-c[a[i]]-c[n-1]-c[1]);;
        }else{
            p=(sum-c[a[i]]-c[a[i]-1]-c[a[i]+1]);
        }
        // cout<<p<<endl; 
        ans+=(1ll*p*c[a[i]]);
        // cout<<(sum-c[a[i]]-c[a[i]-1]-c[a[i]+1]);
    }

    // cout<<ans<<endl;
    // cout<<sum1<<endl;

    ll ss=0;
    for(i=1;i<=k;i++){
        if(i==1 && a[i]==1){
            if(a[i]==1){
                if(a[2]!=2 && a[k]!=n){
                    p=sum1-c[a[i]];
                    ss+=(c[a[i]]*p);
                }else if(a[2]==2 && a[k]!=n){
                    p=sum1-c[a[i]]-c[a[2]];
                    ss+=(c[a[i]]*p);
                }else if(a[2]!=2 && a[k]==n){
                    p=sum1-c[a[i]]-c[a[k]];
                    ss+=(c[a[i]]*p);
                }else{
                    p=sum1-c[a[i]]-c[a[k]]-c[a[2]];
                    ss+=(c[a[i]]*p);
                }
            }
        }else if(i==k && a[i]==n){
            if(a[i]==n){
                if(a[k-1]!=n-1 && a[1]!=1){
                    p=sum1-c[a[i]];
                    ss+=(c[a[i]]*p);
                }else if(a[k-1]==n-1 && a[1]!=1){
                    p=sum1-c[a[i]]-c[a[k-1]];
                    ss+=(c[a[i]]*p);
                }else if(a[k-1]!=n-1 && a[1]==1){
                    p=sum1-c[a[i]]-c[a[1]];
                    ss+=(c[a[i]]*p);
                }else{
                    p=sum1-c[a[i]]-c[a[1]]-c[a[k-1]];
                    ss+=(c[a[i]]*p);
                }
            }
        }else{
            if(a[i]!=1+a[i-1] && a[i]!=a[i+1]-1){
                p=sum1-c[a[i]];
                ss+=(c[a[i]]*p);
            }else if(a[i]!=1+a[i-1] && a[i]==a[i+1]-1){
                p=sum1-c[a[i]]-c[a[i+1]];
                ss+=(c[a[i]]*p);
            }else if(a[i]==1+a[i-1] && a[i]!=a[i+1]-1){
                p=sum1-c[a[i]]-c[a[i-1]];
                ss+=(c[a[i]]*p);
            }else{
                p=sum1-c[a[i]]-c[a[i-1]]-c[a[i+1]];
                ss+=(c[a[i]]*p);
            } 
        }   

    }
    cout<<ans-ss/2<<endl;
    return 0;
}