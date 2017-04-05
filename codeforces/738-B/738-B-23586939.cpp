#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a) printf("%d ",a)
#define printl(a) printf("%lld ",a)

const int MAXM = 1e3+5;
bool visit[MAXM];
int dpr[MAXM][MAXM],a[MAXM][MAXM],dpc[MAXM][MAXM];

int main()
{
	int n,m,i,j,k;
	scan(n);scan(m);

	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scan(a[i][j]);
		}
	}


	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			dpr[i][j] = dpr[i][j-1] + a[i][j];
			dpc[i][j] = dpc[i-1][j] + a[i][j];
		}
	}

	ll c=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]!=0)	continue;
			if(dpr[i][j-1]!=0)	c++;
			if(dpr[i][m]!=dpr[i][j])	c++;
			if(dpc[i-1][j]!=0)	c++;
			if(dpc[n][j]!=dpc[i][j])	c++;
			// cout<<c<<endl;
		}
	}

	printl(c);
	return 0;
}