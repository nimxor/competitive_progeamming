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
	string s;
	cin>>s;
	int n = s.length();
	ll num=0,ans=1;
	for(int i=0;i<n;i++){
		if(i>=1)	ans = (2*ans)%mod;
		num=num*2+s[i]-'0';
		if(num>=mod)	num%=mod;
	}	
	cout<<(ans*num)%mod<<endl;
	return 0;
}