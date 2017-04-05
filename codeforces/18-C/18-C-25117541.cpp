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

int a[MAXM],pre[MAXM];

int main()
{
	int n,m,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		scan(a[i]);
		pre[i] = pre[i-1]+a[i];
	}
	int cn=0;
	for(i=1;i<n;i++){
		int one = pre[i];
		int two = pre[n]-pre[i];
		if(one==two)	cn++;
	}
	cout<<cn<<endl;
	return 0;
}