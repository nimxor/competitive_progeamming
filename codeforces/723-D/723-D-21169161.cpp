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
const int MAXM = 50*50+5;
const int MAXN = 5e2+5; 

map<ll,ll> mm;

vector<pair<int,int> > v[MAXM];
int a[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
bool visit[MAXM][MAXM];
int cn=0,n,m;
vector<pair<int,vector<pair<int,int> > > >vv,vp;
string s[MAXM];

void dfs(int x,int y)
{
    v[cn].pb(mp(x,y));
    visit[x][y]=1;
    for(int i=0;i<4;i++){
        int xx = x-a[i][0];
        int yy = y-a[i][1];
        if(xx>=0 && yy>=0 && xx<n && yy<m){
            if(s[xx][yy]=='.' && !visit[xx][yy])
                dfs(xx,yy);
        }    
    }
}

bool check(vector<pair<int,int> >v)
{
    for(int i=0;i<v.size();i++){
        if(v[i].fi==0 || v[i].fi==n-1)    return false;
        if(v[i].se==0 || v[i].se==m-1)    return false;
    }
    return true;
}

void fill(vector<pair<int,int> > v)
{
    for(int i=0;i<v.size();i++){
        s[v[i].fi][v[i].se]='*';
    }
}

int main()
{
    mset(visit,false);
    int k,i,j;
    cin>>n>>m>>k;
    for(i=0;i<n;i++){
        cin>>s[i];
    }

    cn=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(!visit[i][j] && s[i][j]=='.'){
                dfs(i,j);
                cn++;
            }
        }
    }

    for(i=0;i<cn;i++){
        vv.pb(mp(v[i].size(),v[i]));
    }

    sort(vv.begin(),vv.end());

    // cout<<cn<<endl;

    int su=0;
    for(i=0;i<vv.size();i++){
        if(check(vv[i].se)){
            vp.pb(mp(vv[i].fi,vv[i].se));
        }
    }

    // cout<<vp.size()<<endl;

    cn=0;
    for(i=0;i<vp.size();i++){
        if(vp.size()-cn==k)   break;
        cn++;
        su+=(vp[i].fi);
        fill(vp[i].se);
    }

    cout<<su<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }

    return 0;
}