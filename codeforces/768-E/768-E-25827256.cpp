// http://letuskode.blogspot.in/2014/08/grundy-numbers.html
// https://www.hackerearth.com/challenge/college/algo-cup-march-2k17/algorithm/d7ac576011314c9ebb0891d942a743be/


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
#define pi 3.14159265358979323

const int inf = 1e7;
const int MAXM = 60+5;
const int MAXN = 1e3+4;

// Note : Try to move to such a transaction from which no other tansaction is possible

int gand[MAXM];

void pree()
{
	gand[0]=0;
	for(int i=1;i<=MAXM;i++){
		for(int j=0;j<20;j++){
			int p = (j*(j+1))/2;
			if(p>=i){
				if(p==i)
					gand[i]=j;
				else
					gand[i]=j-1;
				break;
			}
		}
	}
}

int main()
{
	pree();
	int xorr=0;
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>k;
		xorr ^= gand[k];
	}
	cout<<(xorr==0 ? "YES\n" : "NO\n");
	return 0;
}