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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll a[MAXM],pre[MAXM];

int main()
{
	ll n,m,i,j,k;
	ll l,r,ql,qr;
	cin>>n>>l>>r>>ql>>qr;
	for(i=1;i<=n;i++){
		scanl(a[i]);
		pre[i] = pre[i-1]+a[i];
	}
	ll Ans = 1e14;
	for(i=0;i<=n;i++){
		int le = i, re = n-i;
		ll crr = pre[le]*l;
		crr += (pre[n]-pre[le])*r;
		if(le>re){
			crr += (le-re-1)*ql;
		}else if(re>le){
			crr += (re-le-1)*qr;
		}
		Ans = min(Ans,crr);
	}
	cout<<Ans<<endl;
	return 0;
}