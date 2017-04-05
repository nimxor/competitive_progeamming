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

int a[MAXM];
int sm[MAXM];
int dp[MAXM],d[MAXM];

void sieve()
{
	sm[1]=1;
	for(int i=2;i<MAXM;i+=2)	sm[i]=2;
	for(int i=3;i*i<MAXM;i+=2){
		if(sm[i]==0){
			for(int j=i*i;j<MAXM;j+=i){
				sm[j]=i;
			}
		}
	}
	for(int i=1;i<MAXM;i++){
		if(!sm[i])	sm[i]=i;
	}
}

int main()
{
	sieve();
	int n,i,j,k;
	scan(n);
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	int maxm = 1;
	for(i=1;i<=n;i++){
		int c = a[i],temp=0;
		while(c!=1){
			int p = sm[c];
			while(c%p==0){
				c/=p;
			}
			temp = max(1+d[p],temp);
		}
		dp[i]=temp;
		c = a[i];
		while(c!=1){
			int p = sm[c];
			while(c%p==0){
				c/=p;
			}
			d[p] = max(d[p],dp[i]);
		}
		maxm = max(maxm,dp[i]);
	}
	printf("%d\n",maxm);
	return 0;
}