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
const int MAXM = 2e5+5;
const int MAXN = 3e3+4;

int a[MAXM];

int main()
{
	int n,i,j,k;
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	int cn=0,f=0;
	ll p,q;
	for(i=0;i<=1000;i++){
		for(j=0;j<=1000;j++){
			p = b+a*i;
			q = d+c*j;
			if(p<0 or q<0){
				break;
			}
			if(p==q){
				f=1;
				break;
			}
		}
		if(f)	break;
	}
	if(f){
		cout<<p<<endl;
	}else{
		cout<<"-1\n";
	}
	return 0;
}