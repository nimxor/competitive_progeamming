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
const int MAXM = 1e2+5;
const int MAXN = 1e6+4;

vector<ll> v;

bool check(ll n)
{
	int f=0;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			f=1;
			while(n%i==0){
				n/=i;
				v.pb(i);
			}
		}
	}
	if(n>2)	v.pb(n);
	return f==0;
}

int main()
{
	ll n,i,j,k;
	cin>>n;
	if(check(n)){
		cout<<"1\n0\n";
		return 0;
	}
	if(v.size()>1){
		ll p = v[0]*v[1];
		if(p==n){
			cout<<"2\n";
		}else{
			cout<<"1\n"<<p<<endl;
		}
	}else{
		cout<<"2\n";
	}
	return 0;
}