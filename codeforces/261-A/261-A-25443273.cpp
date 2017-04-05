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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[MAXM],q[MAXM];

int main()
{
	int m,i,j,k,n;
	scan(m);
	for(i=1;i<=m;i++){
		scan(q[i]);
	}
	scan(n);
	for(j=1;j<=n;j++){
		scan(a[j]);
	}
	sort(q+1,q+1+m);
	sort(a+1,a+1+n);
	j=1;
	ll su=0;
	for(i=n;i>=1;)
	{
		for(k=0;k<q[j];k++){
			su += a[i];
			i--;
			if(i<=0)	break;
		}
		if(i<=0)	break;
		i-=2;
	}

	cout<<su<<endl;
	return 0;
}