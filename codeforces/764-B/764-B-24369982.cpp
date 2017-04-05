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
const int MAXM = 2e5+5;
const int MAXN = 1e6+4;

ll a[MAXM];

int main()
{
	int t,i,j,k,n;
	scan(n);
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}

	for(i=1;i<=n;i++){
		if(i>n/2)	break;
		if(i&1){
			int x = i;
			int y = n-i+1;
			ll t=a[x];
			a[x] = a[y];
			a[y] = t;
		}
	}
	for(i=1;i<=n;i++){
		printf("%lld ",a[i]);
	}
    return 0;
}