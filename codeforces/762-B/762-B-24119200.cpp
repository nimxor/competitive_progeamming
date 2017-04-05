#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e17;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;
vector<pair<ll,string> > v,v1;
vector<ll> vv;

int main()
{
	string s;
	int a,b,c,i,j,k,m;
	ll val;
	scan(a);scan(b);scan(c);
	scan(m);
	for(i=0;i<m;i++){
		scanl(val);
		cin>>s;
		if(s[0]=='U')	v.pb(mp(val,s));
		else	v1.pb(mp(val,s));
	}

	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end());

	ll su=0,p=0;
	int id1=-1,id2=-1;

	for(i=0;i<v.size();i++){
		if(a==0){
			break;
		}
		su+=v[i].fi;
		a--;
		p++;
	}
	id1 = i;

	for(i=0;i<v1.size();i++){
		if(b==0){
			break;
		}
		su+=v1[i].fi;
		b--;
		p++;
	}
	id2=i;

	for(i=max(0,id1);i<v.size();i++){
		vv.pb(v[i].fi);
	}

	for(i=max(0,id2);i<v1.size();i++){
		vv.pb(v1[i].fi);
	}

	sort(vv.begin(),vv.end());

	for(i=0;i<vv.size();i++){
		if(c==0){
			break;
		}
		su+=vv[i];
		c--;
		p++;
	}

	printf("%lld %lld\n",p,su);
	return 0;
}