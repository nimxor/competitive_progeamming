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
#define pi 3.14159265358979323

const int inf = 1e7;
const int MAXM = 1e4+5;
const int MAXN = 3e3+4;

int a[MAXM];
map<int,int> mm;

int main()
{
	int n,m,i,j,k,p;
	cin>>n>>m;
	int t=0;
	for(i=1;i<=m;i++){
		int f=0;
		mm.clear();
		scan(k);
		for(j=1;j<=k;j++){
			scan(p);
			if(mm[(-p)]==1){
				f=1;
			}
			mm[p]=1;
		}
		if(f==0){
			t=1;
		}
	}
	if(t)	cout<<"YES\n";
	else	cout<<"NO\n";
	return 0;
}