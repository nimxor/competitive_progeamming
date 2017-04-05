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
const int MAXM = 2e5+5;
const int MAXN = 2e6+4;

vector<pair<int,pair<int,int> > > v;
int a[MAXM],b[MAXM];

int main()
{
	int n,m,i,j,k;
	scan(n);scan(k);
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	for(i=1;i<=n;i++){
		scan(b[i]);
	}
	for(i=1;i<=n;i++){
		v.pb(mp(a[i]-b[i],mp(a[i],b[i])));
	}
	sort(v.begin(),v.end());
	ll cn=0;
	for(i=0;i<v.size();){
		if(i>=k){
			if(v[i].fi<=0){
				cn+=v[i].se.fi;
				i++;
			}else{
				break;
			}
		}else{
			cn+=v[i].se.fi;
			i++;
		}
	}
	for(int j=i;j<v.size();j++){
		cn+=v[j].se.se;
	}
	cout<<cn<<endl;
	return 0;
}