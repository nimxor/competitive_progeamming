#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 50+2;
const int MAXN = 1e6+4;

ll a[MAXM],b[6],c[MAXM];

int main()
{
	ll n,i,j,k;
	scanl(n);

	for(i=1;i<=n;i++){
		scanl(a[i]);
	}

	for(i=0;i<5;i++){
		scanl(b[i]);
	}

	ll su=0;

	for(i=1;i<=n;i++){
		su += a[i];
		while(su>=b[0]){
			int pos = lower_bound(b,b+5,su)-b;
			if(pos>4)	pos--;
			if(b[pos]>su)	pos--;
			ll times = su/b[pos];
			su -= times*b[pos];
			c[pos] += times;
		}
	}

	for(i=0;i<5;i++){
		printf("%lld ",c[i]);
	}
	printf("\n");
	printf("%lld\n",su);
	return 0;
}