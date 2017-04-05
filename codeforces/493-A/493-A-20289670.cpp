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
const int MAXM  = 1e2+3;

string h,a;
map<pair<char,pair<int,char> > ,int > m;
vector<pair<string,pair<int,int> > > v;
map<pair<char,int>,int> mm;

int main()
{
    cin>>h>>a;
    int n,i,j;
    cin>>n;
    while(n--)
    {
        int t,num;
        char ch,color;
        cin>>t>>ch>>num>>color;
        if(color=='y')
            m[mp(ch,mp(num,color))]++;
        else
            m[mp(ch,mp(num,color))]=2;
        if(mm[mp(ch,num)]!=0)   continue;
        if(m[mp(ch,mp(num,color))]==2){
            if(ch=='h'){
                mm[mp(ch,num)]=1;
                v.pb(mp(h,mp(num,t)));
            }else{
                mm[mp(ch,num)]=1;
                v.pb(mp(a,mp(num,t)));
            }
        }
    }

    for(i=0;i<v.size();i++){
        cout<<v[i].fi<<" "<<v[i].se.fi<<" "<<v[i].se.se<<endl;
    }
    return 0;
}