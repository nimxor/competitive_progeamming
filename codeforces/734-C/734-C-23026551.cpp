// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/explorers-birthday/description/

#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define scan(a) scanf("%lld",&a)

const int MAXM = 2e5+5;
const int MAXN = 5e1+5;
ll a[MAXM],b[MAXM],c[MAXM],d[MAXM];
map<ll,ll> mm;

int main()
{
	ll n,m,k,i,j,x,s;
	scan(n);scan(m);scan(k);

	scan(x);scan(s);

	for(i=0;i<m;i++){
		scan(a[i]);
	}
	for(i=0;i<m;i++){
		scan(b[i]);
	}
	for(i=0;i<k;i++){
		scan(c[i]);
	}
	for(i=0;i<k;i++){
		scan(d[i]);
	}

	ll minm = n*x;
	// cout<<minm<<endl;

	ll pos = upper_bound(d,d+k,s)-d;
	if(d[pos]!=s)	pos--;
	if(pos>=0 and c[pos]>=n){
		cout<<0<<endl;
		return 0;
	}else if(pos>=0){
		if(n-c[pos]>=0){
			minm=min(minm,(n-c[pos])*x);
		}
	}

	for(i=0;i<m;i++){
		ll nn=n;
		if(b[i]>s)	continue;
		x = a[i];
		ll p = s-b[i];
		if(p==0){
			minm=min(minm,nn*x);
			continue;
		}
		pos = upper_bound(d,d+k,p)-d;
		if(d[pos]!=p)	pos--;
		if(pos>=0){
			nn-=c[pos];
			p-=d[pos];
		}
		// cout<<nn<<endl;
		if(nn<0){
			cout<<0<<endl;
			return 0;
		}else{
			minm=min(minm,nn*x);
		}
	}

	cout<<minm<<endl;

   	return 0;
}