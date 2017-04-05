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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll a[MAXM], p=1, b[101];
map<ll,ll> ma;
set<ll> s;

int main()
{
	ll k,i,j,n;
	scanl(n);scanl(k);

	s.insert(1);
	for(i=2;i<=100;i++){
		if(p*k>10e16)	break;
		p = p*k;
		s.insert(p);
	}

	for(i=0;i<n;i++){
		scanl(a[i]);
	}

	ll Ans=0;

	for(auto it : s){
		ma.clear();
		ma[0]=1;
		ll cur_sum = 0;
		ll su = it;
		for(j=0;j<n;j++){
			cur_sum = cur_sum + a[j];
			if(ma.find(cur_sum-su)!=ma.end()){
				Ans+=ma[cur_sum-su];
			}
			ma[cur_sum]++;
		}
	}

	printf("%lld\n",Ans);

	return 0;
}