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
ll n,m,k;

bool cal(ll x)
{
	ll l = k-1;
	ll r = n-k;
	ll pp=0,qq=0;
	if(x>=l){
		ll c = x-l - 1;
		pp = ((x*(x+1))/2)-((c*(c+1))/2);
        }else{
		pp = ((x)*(x+1))/2;
	}
	x--;
	if(x>=r){
		ll c = x-r;
		qq = ((x*(x+1))/2)-((c*(c+1))/2);
	}else{
		qq = ((x)*(x+1))/2;
	}
	return pp+qq <= m ;
}

ll search()
{
    ll lo = 0,hi = m;
	ll res = -1;
	while(lo<=hi){
		ll mid = lo + (hi-lo+1)/2;

		if(cal(mid)){
			lo = mid+1;
			res = mid;
		}else{
			hi = mid-1;
		}
	}
	return res;
}

int main()
{
	ll i,j;
	scanl(n);scanl(m);scanl(k);
	if(m==0){
		cout<<1<<endl;
		return 0;
	}
	if(n==1){
		cout<<m<<endl;
		return 0;
	}
	m-=n;
	cout<<search()+1<<endl;
}