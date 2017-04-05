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
#define scan(a) scanf("%lld",&a)
#define print(a,s) printf("Case #%d: %s\n",a,s)

const int MAXM = 1e5+4;
ll a[MAXM],fre[MAXM];
map<char,int> m;

int main()
{
	ll n,i,j,k,c=0;
	scan(n);
	for(i=0;i<n;i++){
		scan(a[i]);
		fre[a[i]]++;
		if(!(a[i]&1)){
			c++;
		}
	}

	ll maxm=1;
	maxm = max(maxm,c);

	for(i=3;i<MAXM;i+=2){
		ll p = 0;
		for(j=i;j<MAXM;j+=i){
			p+=fre[j];
		}
		maxm=max(maxm,p);
	}

	printf("%lld\n",maxm);
	return 0;
}