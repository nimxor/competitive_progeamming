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
 
const int MAXM=3e5+2;
int a[MAXM];
bool prime[MAXM];
vector<int> v1,v2;

int main()
{
    int n,i,j,k;
    cin>>n;

    for(i=1;i<=n*n;i++){
        if(i&1) v1.pb(i);
        else    v2.pb(i);
    }

    int p=0,q=0;
    list<int> l;
    list<int> :: iterator it;
    int odd=1;
    for(i=0;i<n;i++){
        int od = odd ;
        // cout<<od<<endl;
        int even = n-od;
        l.pb(v1[p++]);
        od--;
        int cnt=0;
        for(j=n/2-1;j>=0;j--){
            if(od && cnt){
                l.push_back(v1[p++]);
                l.push_front(v1[p++]);
                od-=2;
                cnt=1-cnt;
            }else if(even && !od){
                l.push_back(v2[q++]);
                l.push_front(v2[q++]);
                even-=2;
                cnt=1-cnt;
            }else if(!even && od){
                l.push_back(v1[p++]);
                l.push_front(v1[p++]);
                od-=2;
                cnt=1-cnt;
            }else{
                l.push_back(v2[q++]);
                l.push_front(v2[q++]);
                even-=2;
                cnt=1-cnt;
            }
        }
        if(i<n/2)   odd+=2;
        else    odd-=2;
        for(auto lll : l){
            cout<<lll<<" ";
        }
        cout<<endl;
        l.clear();
    }

    return 0;
}