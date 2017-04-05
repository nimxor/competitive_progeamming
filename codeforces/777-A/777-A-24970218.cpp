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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll a[MAXM], p=1, b[101];
map<ll,ll> ma;
set<ll> s;

int main()
{
	ll n,i,j,k;

	cin>>n>>k;

	if(k==0){
		ll p = n%6;
		if(p==1){
			cout<<"1\n";
		}else if(p==2){
			cout<<"1\n";
		}else if(p==3){
			cout<<"2\n";
		}else if(p==4){
			cout<<"2\n";
		}else if(p==5){
			cout<<"0\n";
		}else{
			cout<<"0\n";
		}
	}else if(k==1){
		ll p = n%3;
		if(p==1){
			cout<<"0\n";
		}else if(p==2){
			cout<<"2\n";
		}else{
			cout<<"1\n";
		}
	}else{
		ll p=n%6;
		if(p==1){
			cout<<"2\n";
		}else if(p==2){
			cout<<"0\n";
		}else if(p==3){
			cout<<"0\n";
		}else if(p==4){
			cout<<"1\n";
		}else if(p==5){
			cout<<"1\n";
		}else{
			cout<<"2\n";
		}
	}

	return 0;
}