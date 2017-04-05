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

int main()
{
	ll a,b,i,j,k;
	cin>>a>>b;
	ll lcm =  (a/(__gcd(a,b)))*b;
	ll p1 = lcm/a;
	ll p2 = lcm/b;
	if(p1+1<p2){
		cout<<"Masha\n";
	}
	else if(p2+1<p1){
		cout<<"Dasha\n";
	}
	else{
		cout<<"Equal\n";
	}
	return 0;
}