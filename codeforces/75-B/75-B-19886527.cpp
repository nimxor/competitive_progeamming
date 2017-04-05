#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 786433
 
const int MAXM = 2e5+2; 
map<string,ll> m,m1;

bool cmp(pair<ll,string> l,pair<ll,string> r)
{
    return (l.fi>r.fi) || (l.fi==r.fi && l.se<r.se);
}

int main()
{
    string s;
    cin>>s;
    string s1,s2,s3,s4,s5;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2>>s3>>s4;
        if(s2=="posted" || s2=="commented"){
            cin>>s5;
            if(s2=="posted"){
                int l=s4.length();
                string ss=s4.substr(0,l-2);
                if(s1==s || ss==s){
                    m[s1]+=15;
                    m[ss]+=15;
                }
                else{
                    if(m[s1]==0)    m[s1]=0;
                    if(m[ss]==0)    m[ss]=0;
                }
            }else if(s2=="commented"){
                int l=s4.length();
                string ss=s4.substr(0,l-2);
                if(s1==s || ss==s){
                    m[s1]+=10;
                    m[ss]+=10;
                }else{
                    if(m[s1]==0)    m[s1]=0;
                    if(m[ss]==0)    m[ss]=0;
                }
            }
        }else{
            int l=s3.length();
            string ss=s3.substr(0,l-2);
            if(s1==s || ss==s){
                m[s1]+=5;
                m[ss]+=5;  
            } else{
                if(m[s1]==0)    m[s1]=0;
                if(m[ss]==0)    m[ss]=0;
            }
        }
    }

    map<string,ll>:: iterator it1;
    vector<pair<ll,string > > vp;
    for(it1=m.begin();it1!=m.end();it1++){
        vp.pb(mp(it1->se,it1->fi));
    }

    sort(vp.begin(),vp.end(),cmp);

    for(int i=0;i<vp.size();i++){
        if(vp[i].se==s) continue;
        cout<<vp[i].se<<endl;
    }
    return 0;
}