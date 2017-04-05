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
#define mod 1073741824 
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e6+2;
const int MAXN = 1e6+4;

int aa,b,c;
int a[MAXM];

void pre()
{
	for(int i=1;i<MAXM;i++){
		for(int j=i;j<MAXM;j+=i){
			a[j]++;
		}
	}
}

int main()
{
	ll su=0;
	pre();
	scan(aa);scan(b);scan(c);
	for(int i=1;i<=aa;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				int p = i*j*k;
				su += a[p];
				if(su>=mod){
					su%=mod;
				}
			}
		}
	}

	printf("%lld\n",su);
	return 0;
}