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
ll n,cn=0;
set<ll> s;

bool check(ll x)
{
	s.clear();
	while(x){
		int p = x%10;
		s.insert(p);
		x/=10;
	}
	if(s.size()>2)	return true;
	return false;
}

void dfs(ll x)
{
	if(x>n)	return ;
	if(x>99){
		if(check(x))	return ;
	}
	cn++;
	for(ll i=0;i<=9;i++){
		dfs(x*10+i);
	}
}

int main()
{
	ll i,j,k;

	cin>>n;

	for(ll i=1;i<=9;i++)
		dfs(i);

	cout<<cn<<endl;
	return 0;
}