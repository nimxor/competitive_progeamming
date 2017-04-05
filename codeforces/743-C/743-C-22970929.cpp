#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const int MAXM = 1e4+2;

ll lcm(ll x,ll y,ll z){
	ll p = (x/__gcd(x,y))*y;
	ll q = (p/__gcd(p,z))*z;
	return q;
}

ll lcmm(ll x,ll y)
{
	return (x/__gcd(x,y))*y;
}

int main()
{
	double x=0.0,y=0.0,z=0.0;
	ll n,i,j,k;
	cin>>n;

	if(n==1){
		cout<<-1<<endl;
		return 0;
	}

	for(i=1;i<=MAXM;i++){
		for(j=i+1;j<=MAXM;j++){
			ll lc = n*i*j;
			ll num = 2*i*j-n*i-n*j;
			if(num<=0)	continue;
			if(lc%num!=0)	continue;
			ll de = lc/num;
			if(de>1e9)	continue;
			if(de!=i && de!=j){
				cout<<i<<" "<<j<<" "<<de<<endl;
				return 0;
			}
		}
	}

	cout<<-1<<endl;
    return 0;
}