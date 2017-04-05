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

const ll inf = 1e8;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

vector<int> v;
string s;
map<ll,ll> m;

int main()
{
	ll n,i,j,k,a;
	cin>>a>>s;

	ll su[MAXM];
	n = s.length();

	for(i=1;i<=n;i++){
		su[i]=su[i-1]+s[i-1]-'0';
	}	

	ll cn=0;

	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
			m[su[j]-su[i]]++;
			cn++;
		}
	}

	ll Ans=0;

	for(i=1;i*i<=a;i++){
		if(a%i==0){
			if(a/i>66666 or i>66666)	continue;
			ll p = m[a/i]*m[i];
			if(a/i==i)	Ans+=p;
			else	Ans+=2*p;
		}
	}

	if(a==0)	Ans+=(2LL*cn*m[0]-m[0]*m[0]);

	cout<<Ans<<endl;
	return 0;
}