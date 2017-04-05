#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
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
#define pi 3.14159265358979323
 
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 1e2+15;
const int MAXN = 1e4+4;

char s[MAXM][MAXM];
bool ok = true;
int n,cn=0;

void check(int x,int y)
{
	if(x>=1 and y>=1 and x<=n and y<=n){
		if(s[x][y]=='o')	cn++;
	}
}

void dfs(int x,int y)
{
	check(x+1,y);
	check(x-1,y);
	check(x,y-1);
	check(x,y+1);
}

int main()
{
	int i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>s[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cn=0;
			dfs(i,j);
			if(cn&1){
				ok=false;
			}
			if(!ok){
				cout<<"NO\n";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	return 0;
}