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
vector<pair<int , string> > v;
map<int,int> m;

int main()
{
    int n,i,j,k;
    cin>>n>>k;
    string s[n];
    string ss;
    for(i=0;i<n;i++){
        cin>>s[i];
        int q = s[i].length();
        m[q]++;
    }
    cin>>ss;
    int su=0,cn=0,p;
    
    int x = ss.length();

    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->fi==x) {
            p=it->se;
            break;
        }
        su+=(it->se);
    }
    int pp = su+p,xx=0;
    for(i=1;i<=pp;i++){
        xx++;
        if(i==pp)   break;
        if(xx==k){
            cn+=(k+5);
            xx=0;
        }
    }
    cn+=xx;
    int cnn=cn;
    cn=0;

    int suu=su+1;
    xx=0;
    for(i=1;i<=suu;i++){
        xx++;
        if(i==suu)   break;
        if(xx==k){
            cn+=(k+5);
            xx=0;
        }
    }
    cn+=xx;
    cout<<cn<<" "<<cnn<<endl;
    return 0;
}