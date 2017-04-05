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
const int MAXM = 1e4+5;
const int MAXN = 1e6+4;

int a[MAXM];

int main()
{
	int n,i,j=1,k;
	cin>>n;
	for(i=1;i<=n/2+1;i++){
		a[j]=i;
		a[++j]=n-i+1;
		++j;
	}
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}