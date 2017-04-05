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

int main()
{
	int n,i,j,k;
	cin>>n;
	ll su = 0,maxm=0;
	for(i=1;i<=n;i++){
		scan(k);
		su+=k;
		maxm=max(maxm,1LL*k);
	}
	ll cn = 0;
	if(su%(n-1))	cn++;
	cn += su/(n-1);
	cout<<max(maxm,cn)<<endl;
	return 0;
}