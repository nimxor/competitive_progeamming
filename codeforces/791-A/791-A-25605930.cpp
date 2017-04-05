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

int a[MAXM];

int main()
{
	int n,i,j,k;
	ll a,b;
	cin>>a>>b;
	ll p=a,q=b;
	int cn=0;
	for(i=0;;i++){
		if(p>q)	break;
		p=3*p;
		q=2*q;
		cn++;
	}
	cout<<cn<<endl;
	return 0;
}