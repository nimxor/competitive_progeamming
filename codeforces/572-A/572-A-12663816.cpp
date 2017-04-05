#include<bits/stdc++.h>
    #include<cstdio>
    using namespace std;
    
    typedef vector<int> vi; 
    typedef vector<vi> vvi; 
    typedef pair<int,int> pii; 
     
    #define ll long long
    #define sf1(a) scanf("%d",&a)
    #define sf2(a,b) scanf("%d%d",&a,&b)
    #define sfl1(a) scanf("%lld",&a)
    #define sfl2(a,b) scanf("%lld%lld",&a,&b);
    #define pf1(a) printf("%d\n",a)
    #define pf2(a,b) printf("%d%d\n",a,b)
    #define pf3(a,b,c) printf("%d%d%d\n",a,b,c)
    #define mset(m,v) memset(m,v,sizeof(m))
    #define INF 0x3f3f3f3f
    #define INFL 0x3f3f3f3f3f3f3f3fLL
    #define iter(a,it) for(auto it: a)
    #define f(it,o) f(aut(it, (o).begin()); it != (o).end(); ++ it)
    #define tr(cont, it) for(typeof(cont.begin()) it = cont.begin(); it != cont.end(); it++)    
    #define dbg(x)  cout<< #x << ": " << (x) << endl; 
    #define all(o) (o).begin(), (o).end()
    #define present(cont, e) (cont.find(e) != cont.end()) // find for set/map
    #define vpresent(cont, e) (find(all(cont),e) != cont.end())  //find for vectors
    #define pb(x) push_back(x)
    #define mp(x,y) make_pair((x),(y))
    #define faster_io() ios_base::sync_with_stdio(false)
    #define SZ(x) ((int)x.size())
    #define vii vector<pair<int,int>>
    #define llu unsigned long long
    
    
    int main() 
    {
        int n,m,i,j,f=0;
        int k,l;
        ll a[100010],b[100010];
        cin>>n>>m>>k>>l;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
            
        if(a[k-1]<b[m-l])
            f=1;
            
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
            
        return 0;
    }