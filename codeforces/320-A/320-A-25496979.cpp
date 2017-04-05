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

ll n,f=0;

void dfs(ll num)
{
	if(num>n)	return ;
	if(num==n){
		f=1;
		return;
	}
	dfs(num*10+1);
	dfs(num*100+14);
	dfs(num*1000+144);
}

int main()
{
	// string s;
	// cin>>s;
	// int n,i,j,k;
	// n = s.length();
	// ll num=0;
	// for(i=0;i<n;i++){
	// 	num = num*2+s[i]-'0';
	// 	if(num>=mod)	num%=mod;
	// }

	ll i,j,k;

	cin>>n;

	dfs(0);

	if(f)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;
}