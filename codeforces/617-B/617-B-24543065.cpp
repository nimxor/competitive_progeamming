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
const int MAXM = 1e2+2;
const int MAXN = 1e6+4;
const int SIZE = 2;
const int MSB = 30;

int n;
int a[MAXM],dp[MAXM];
map<int,int> m;

int main()
{
	int n,i,j,k,f=0;
	scan(n);
	for(i=1;i<=n;i++){
		scan(a[i]);
		if(a[i]==1)	f++;
	}

	if(!f){
		printf("0\n");
		return 0;
	}

	if(f==1){
		printf("1\n");
		return 0;
	}

	dp[0]=-1;
	for(i=1;i<=n;i++){
		if(a[i]==1){
			dp[i]=0;
		}else{
			dp[i] = dp[i-1]+1;
		}
	}

	ll cnt = 1;
	int prev=0;
	for(i=1;i<=n;i++){
		if(prev==1){
			if(a[i+1]==1){
				cnt *= 1LL*(dp[i]+1);
			}
		}
		if(a[i]==1)	prev=1;
	}

	printf("%lld\n",cnt);
    return 0;
}