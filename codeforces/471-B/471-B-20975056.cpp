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
const int MAXM = 1e6+5;
const int MAXN = 5e2+5;
#define double long double

vector<pair<int,int> > v,vv;

void print()
{
    for(int i=0;i<v.size();i++){
        cout<<v[i].se<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
        v.pb(mp(a[i],i));
    }    

    sort(v.begin(),v.end());

    int p=0;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]==a[j]){
                p++;
            }
        }
    }

    if(p<=1)   {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    print();
    int x=1;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(i==j)    continue;
            if(v[i].fi==v[j].fi){
                swap(v[i],v[j]);
                print();
                x++;
                if(x==3)    break;
            }
        }
        if(x==3)    break;
    }



    return 0;
}