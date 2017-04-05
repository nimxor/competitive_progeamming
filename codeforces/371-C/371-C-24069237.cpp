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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;
int a[MAXM],ff=0,cum[MAXM];
vector<ll>v[MAXM];
int n;
ll r,pb,pc,ps,b=0,c=0,ss=0,nb,nc,ns;
string s;

bool can(ll x)
{
	return ((max(0LL,(b*x-nb))*pb)+(max(0LL,(c*x-nc))*pc)+(max(0LL,(ss*x-ns))*ps)) <= r;
}

ll search()
{
	ll res = -1;
	ll lo = 0, hi = 1e15;
	while(lo<=hi){
		ll mid = lo + (hi-lo+1)/2;
		if(can(mid)){
			res = mid;
			lo = mid+1;
		}else{
			hi = mid-1;
		}
	}
	return res;
}

int main()
{
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='B')	b++;
		if(s[i]=='C')	c++;
		if(s[i]=='S')	ss++;
	}
	scanl(nb);scanl(ns);scanl(nc);
	scanl(pb);scanl(ps);scanl(pc);
	scanl(r);
	cout<<max(0LL,search())<<endl;
	return 0;
}