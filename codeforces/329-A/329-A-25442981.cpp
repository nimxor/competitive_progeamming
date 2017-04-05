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

const ll inf = 1e17;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

vector<pair<int,int> > vp;

int main()
{
	int n,i,j,k;
	cin>>n;
	string s[n+2];
	for(i=0;i<n;i++){
		cin>>s[i];
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i][j]=='.'){
				vp.pb(mp(i+1,j+1));
				break;
			}
		}
	}

	if(vp.size()==n){
		for(i=0;i<n;i++){
			printf("%d %d\n",vp[i].fi,vp[i].se);
		}
		return 0;
	}

	vp.clear();

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[j][i]=='.'){
				vp.pb(mp(j+1,i+1));
				break;
			}
		}
	}

	if(vp.size()==n){
		for(i=0;i<n;i++){
			printf("%d %d\n",vp[i].fi,vp[i].se);
		}
		return 0;
	}

	printf("-1\n");


	return 0;
}