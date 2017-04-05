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

const int MAXM=1e5+3;
vector<int> v[MAXM];
bool visit[MAXM];
int color[MAXM];
int flag=0;

void dfs(int x)
{
    visit[x]=true;
    for(int i=0;i<v[x].size();i++){
        int u=v[x][i];
        if(!visit[u]){
            color[u]=1-color[x];
            dfs(u);
        }else{
            if(color[u]==color[x])    flag=1;
        }
    }
}

int main()
{
    int n,m,i,j,k,x,y;
    mset(visit,false);
    mset(color,0);
    cin>>n>>m;
    for(i=1;i<=m;i++){  
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(i=1;i<=n;i++){
        if(!visit[i])
            dfs(i);
    }

    if(flag==1){
        cout<<-1<<endl;
        return 0;
    }

    vector<int> v1,v2;
    for(i=1;i<=n;i++){
        if(color[i]==1){
            v1.pb(i);
        }else{
            v2.pb(i);
        }
    }

    cout<<v1.size()<<endl;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    cout<<v2.size()<<endl;
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    return 0;
}