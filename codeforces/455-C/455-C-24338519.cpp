#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e17;
const int MAXM = 3e5+5;
const int MAXN = 1e6+4;

int maxm = 0,diam=-1;
int lev[MAXM],dsu[MAXM];
bool visit[MAXM];
vector<int> v[MAXM];
int longest[MAXM],leaf,ans=0;
int sz[MAXM];

int findroot(int x)
{
    if(x==dsu[x])   return x;
    return findroot(dsu[x]);
}

void DFS(int x)
{
    visit[x]=1;
    if(maxm <= lev[x]){
        maxm = lev[x];
        leaf = x;
    }
    for(auto it : v[x]){
        if(!visit[it]){
            lev[it] = 1+lev[x];
            DFS(it);
        }
    }
}

void DFS2(int x,int par = -1)
{
    diam = max(diam,lev[x]);
    for(auto it : v[x]){
        if(it != par){
            lev[it] = 1+lev[x];
            DFS2(it,x);
        }
    }
}

int cei(int x)
{
    return (int)(ceil((double)longest[x]/2.0));
}

void unite(int x,int y)
{
    int r1 = findroot(x);
    int r2 = findroot(y);
    if(r1==r2)    return ;
    if(sz[r1]<sz[r2]){
        dsu[r1] = r2;
        sz[r2]+=sz[r1];
    }else{
        dsu[r2] = r1;
        sz[r1]+=sz[r2];
    }
}

void unite2(int x,int y)
{
    int r1 = findroot(x);
    int r2 = findroot(y);
    if(r1==r2)  return;
    if(sz[r1] < sz[r2]){
        sz[r2] += sz[r1];
        dsu[r1] = r2;
        longest[r2] = max(max(longest[r1],longest[r2]),1+cei(r1)+cei(r2));
    }else{
        sz[r1] += sz[r2];
        dsu[r2] = r1;
        longest[r1] = max(max(longest[r2],longest[r1]),1+cei(r1)+cei(r2));
    }
}

int main()
{
    int n,m,q,i,j,k,x,y;

    scan(n);scan(m);scan(q);
    
    for(i=1;i<=n;i++){
        dsu[i]=i;
        longest[i] = 0;
        sz[i]=1;
    }

    for(i=1;i<=m;i++){
        scan(x);scan(y);
        v[x].pb(y);
        v[y].pb(x);
        // int r1 = findroot(x);
        // int r2 = findroot(y);
        unite(x,y);
        // dsu[r1]=r2;
    }

    for(i=1;i<=n;i++){
        if(!visit[i]){
            maxm = 0;
            leaf = i;
            lev[i]=0;
            DFS(i);
            lev[leaf] = 0;
            diam = -1;
            DFS2(leaf);
            longest[findroot(i)] = diam;
        }
    }

    while(q--)
    {
        scan(k);
        if(k==1){
            scan(x);
            printf("%d\n",longest[findroot(x)]);
        }else{
            scan(x);scan(y);
            unite2(x,y);
            // longest[r1] = max(max(longest[r1],longest[r2]),1+ceil(r1)+ceil(r2));
        }
    }

    return 0;
}