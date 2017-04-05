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
#define scan(a) scanf("%lld",&a)

const int MAXM = 2e5+5;
ll a[MAXM];

int main()
{
	ll n,k,a,b,i,j;
	cin>>n>>k>>a>>b;

	ll minm = min(a,b);
	ll maxm = max(a,b);

	ll sl = minm+1;

	ll matra = k*sl;

	if(matra<maxm){
		cout<<"NO\n";
		return 0;
	}

	matra = maxm/sl;
	ll rem = maxm%sl;

	int r=matra;
	if(rem){	
		r++;
		rem--;
	}

	for(i=0;i<r;i++){
		if(maxm==a){
			cout<<"G";
		}else{
			cout<<"B";
		}
	}

	for(i=0;i<minm;i++){
		if(maxm==a){
			cout<<"B";
			int r = matra;
			if(rem){
				rem--;
				r += 1;
			}
			for(j=0;j<r;j++){
				cout<<"G";
			}
		}else{
			cout<<"G";
			int r = matra;
			if(rem){
				rem--;
				r += 1;
			}
			for(j=0;j<r;j++){
				cout<<"B";
			}
		}
		// cout<<"\n";
	}

	return 0;
}