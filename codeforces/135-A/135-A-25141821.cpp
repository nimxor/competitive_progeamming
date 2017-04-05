#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000009
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e8;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll a[MAXM];

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}
	sort(a+1,a+1+n);
	if(a[n]==1)	a[n]=2;
	else	a[n]=1;
	sort(a+1,a+1+n);
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}