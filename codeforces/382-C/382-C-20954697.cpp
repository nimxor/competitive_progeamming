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
vector<int> v;

map<int,int> hash,hs;
int n,ff=1;

bool isvalid(int *a)
{
    for(int i=1;i<n;i++){
        hash[a[i]-a[i-1]]++;
    }
    if(hash.size()==1){
        ff=0;
        return true;
    }
    if(hash.size()<=2){
        map<int,int>:: iterator it=hash.begin(),it1;
        it1=it;
        it1++;
        if(it->se==1 || it1->se==1){
            if((it->fi==((it1->fi)*2)) || (it1->fi==((it->fi)*2)))
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool check()
{
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        hs[v[i]-v[i-1]];
    }
    if(hs.size()==1)    return true;
    else    return false;
}


int main()
{
    int i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        v.pb(a[i]);
    }
    sort(a,a+n);
    if(n==1){
        cout<<-1<<endl;
        return 0;
    }
    else if(n==2){
        int x = a[n-1]-a[n-2];
        if(x==0){
            cout<<"1\n"<<a[0]<<endl;
            return 0;
        }
        if(x%2==0)
            cout<<3<<endl;
        else
            cout<<2<<endl;
        cout<<a[0]-x<<" ";
        if(x%2==0){
            cout<<(a[0]+a[1])/2<<" ";
        }
        cout<<a[1]+x<<endl;
    } else {
        // cout<<"he"<<endl;
        if(n==3){
            // cout<<"se"<<endl;
            int d1=a[1]-a[0];
            int d2=a[2]-a[1];
            if(d1<d2){
                if(d2%2==0){
                    cout<<1<<endl;
                    cout<<(a[2]+a[1])/2<<endl;
                }else{
                    cout<<0<<endl;
                }
            }else if(d1>d2){
                if(d1%2==0){
                    cout<<1<<endl;
                    cout<<(a[0]+a[1])/2<<endl;
                }else{
                    cout<<0<<endl;
                }
            }else{
                if(d1==0){
                    cout<<"1\n"<<a[0]<<endl;
                    return 0;
                }
                cout<<"2\n"<<a[0]-d1<<" "<<a[n-1]+d1<<endl;
            }
        }else{
            if(!isvalid(a)){
                cout<<0<<endl;
                return 0;
            }
            if(ff==0){
                int d = a[1]-a[0];
                if(d==0){
                    v.pb(a[0]);
                    if(!check()){
                        cout<<0<<endl;
                        return 0;
                    }
                    cout<<"1\n"<<a[0]<<endl;
                    return 0;
                }else{
                    v.pb(a[0]-d);
                    v.pb(a[n-1]+d);
                    if(!check()){
                        cout<<0<<endl;
                        return 0;
                    }
                    cout<<"2\n"<<a[0]-d<<" "<<a[n-1]+d<<endl;
                    return 0;
                }
            }
            int d1=a[1]-a[0];
            int d2=a[2]-a[1];
            int d3=a[3]-a[2];
            int d,f=0;
            if(d1==d2 && d2==d3){
                d=d1;
                f=1;
            }else if(d1==d2){
                d=d1;
            }else if(d1==d3){
                d=d1;
            }else if(d2==d3){
                d=d2;
            }else{
                cout<<0<<endl;
                return 0;
            }
            for(i=1;i<n;i++){
                int xx = a[i]-a[i-1];
                if(xx!=d){
                    if(xx%2==0){
                        v.pb((a[i]+a[i-1])/2);
                        if(!check()){
                            cout<<0<<endl;
                            return 0;
                        }
                        cout<<1<<endl;
                        cout<<(a[i]+a[i-1])/2<<endl;
                    }else{
                        cout<<0<<endl;
                    }
                    break;
                }
            }
        }

    }
    return 0;
}