#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a) printf("%d\n",a)
#define printl(a) printf("%lld\n",a)

const int MAXM = 1e5+5;
bool visit[MAXM];
int a[MAXM];
vector<pair<ll,ll> > vp;

int main()
{
	ll n,m,i,j,k,x,y;
	cin>>n;

	ll cn=1,l=-1e15;
	for(i=0;i<n;i++){
		cin>>x>>y;
		vp.pb(mp(x,y));
	}

	l = vp[0].fi;
	for(i=1;i<vp.size();i++){
		if(i==vp.size()-1){
			cn++;
			break;
		}
		if(vp[i].fi-vp[i].se > l){
			l = vp[i].fi;
			cn++;
		}else if(vp[i].fi+vp[i].se<vp[i+1].fi){
			cn++;
			l = vp[i].fi+vp[i].se;
		}else{
			l = vp[i].fi;
		}
	}

	cout<<cn<<endl;
	
	return 0;
}