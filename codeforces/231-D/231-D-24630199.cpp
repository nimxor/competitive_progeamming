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
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 10+4;

int main()
{
	int x,y,z,x1,y1,z1;
	scan(x);scan(y);scan(z);
	scan(x1);scan(y1);scan(z1);
	int a1,a2,a3,a4,a5,a6;
	scan(a1);scan(a2);scan(a3);scan(a4);
	scan(a5);scan(a6);

	ll ans = 0;
	if(x>x1){
		ans += a6;
	}
	if(x<0){
		ans += a5;
	}
	if(y>y1){
		ans += a2;
	}
	if(y<0){
		ans += a1;
	}
	if(z>z1){
		ans += a4;
	}
	if(z<0){
		ans += a3;
	}
	printf("%lld\n",ans);
	return 0;
}