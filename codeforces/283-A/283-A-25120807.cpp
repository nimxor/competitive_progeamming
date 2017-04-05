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

const ll inf = 1e8;
const int MAXM = 2e5+5;
const int MAXN = 1e6+4;

int a[MAXM],b[MAXM],BIT[MAXM];

void update(int idx,int val)
{
	while(idx<MAXM){
		BIT[idx] += val;
		idx += (idx&-idx);
	}
}

ll query()
{
	int idx=MAXM;
	ll ret = 0;
	while(idx>0){
		ret += BIT[idx];
		idx -= (idx&-idx);
	}
	return ret;
}

int main()
{
	int n,i,j,k;
	scan(n);
	ll su = 0;
	int last=1;
	while(n--)
	{
		int x,y;
		scan(k);
		if(k==1){
			scan(x);scan(y);
			b[x]+=y;
			su += (y*x);
		}else if(k==2){
			scan(y);
			su += y;
			last++;
			a[last] = y;
		}else{
			if(last>=2){
				su -= a[last];
				su -= b[last];
				b[last-1]+=b[last];
				a[last]=0;
				b[last]=0;
				last--;
			}
		}
		double p = ((double)su)/last;
		printf("%lf\n",p);
	}
	return 0;
}