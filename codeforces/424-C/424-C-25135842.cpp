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
const int MAXM = 1e6+5;
const int MAXN = 1e6+4;

ll a[MAXM];
ll pre[MAXM];

void pree()
{
	pre[0]=0;
	for(int i=1;i<MAXM;i++){
		pre[i] = i^pre[i-1];
	}
}

int main()
{
	pree();
	ll n,i,j,k;
	cin>>n;
	ll su = 0;
	for(i=1;i<=n;i++){
		scanl(a[i]);
		su ^= (i*((n-i)&1==1));
		su ^= a[i];
	}
	// cout<<su<<endl;
	for(i=2;i<=n;i++){
		ll q = (n-i)/i;
		ll p = n%i;
		if(q&1){
			su ^= pre[i-1];
		}
		su ^= pre[p];
	}

	cout<<su<<endl;
	return 0;
}