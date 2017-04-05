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
const int MAXM = 3e5+6;
const int MAXN = 2e6+1;

int a[MAXM];
int main()
{
	ll su = 0;
	int n,i,k;
	scan(n);
	for(i=1;i<=n;i++){
		scan(a[i]);
		su += a[i];
	}
	sort(a+1,a+1+n);
	int j=1;
	for(i=1;i<=n;i++,j++){
		if(i==n)	j--;
		su += (1LL*j*a[i]);
	}
	printf("%lld\n",su);
	return 0;
}