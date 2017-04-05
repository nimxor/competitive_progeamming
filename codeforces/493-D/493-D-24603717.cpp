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
const int MAXN = 2e2+4;

int b[MAXN];
int a[MAXM];
ll su[MAXM];


int main()
{
	ll n,i,j,k;
	scanl(n);
	if(n&1){
		printf("black\n");
	}else{
		ll p = n/2+1;
		printf("white\n");
		printf("1 2\n");
	}
	return 0;
}