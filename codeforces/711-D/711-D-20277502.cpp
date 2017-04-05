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
const int MAXM  = 2e5+8;
int power[MAXM];
vector<int> v[MAXM];
bool visit[MAXM];
int sttim=0,endtim=0,cycles=0,tim[MAXM],flag[MAXM];

void pre()
{
    power[0]=1;
    for(int i=1;i<MAXM;i++){
        power[i]=2*power[i-1];
        if(power[i]>=mod)   power[i]%=mod;
    }
}

void pre1()
{
    for(int i=1;i<MAXM;i++){
        v[i].clear();
        visit[i]=false;
    }
}

void dfs(int x,int cc)
{
    visit[x]=true;
    flag[x]=cc;
    tim[x]=sttim;
    sttim++;
    for(int i=0;i<v[x].size();i++){
        int p = v[x][i];
        if(!visit[p])   dfs(p,cc);
        else{
            if(flag[x]==flag[p])    cycles = tim[x]-tim[p]+1;  
        }
    }
    endtim++;
}

int main()
{
    pre();
    pre1();
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>k;
        v[i].pb(k);
    }       

    ll ans=1,an=1;
    int nn=n,cc=0;
    for(i=1;i<=n;i++){
        if(visit[i])    continue;
        cycles=0;
        cc++;
        sttim=0;
        endtim=0;
        dfs(i,cc);
        if(cycles){
            an=1;
            nn-=cycles;
            an*=(1LL*power[cycles]);
            if(an>=mod)    an=mod;
            an=(an-2);
            if(an<0)   an=an%mod;
            ans=(ans*an)%mod;
        }
    }
    ans*=(1LL*power[nn]);
    if(ans>=mod)    ans%=mod;
    cout<<ans<<endl;
    return 0;
}