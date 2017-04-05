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
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

ll modpow(ll e,ll b)
{
	ll res = 1LL;
	while(b)
	{
		if(b&1){
			res = (res*e)%mod; 
		}
		e = (e*e)%mod;
		b/=2;
	}
	return res;
}

ll a[MAXM][MAXM];
vector<ll> v;

bool check(int n)
{
	ll sum1d=0,sum2d=0,sum1=0,sum2=0,su=0;
	for(int i=1;i<=n;i++){
		sum1=0,sum2=0;
		for(int j=1;j<=n;j++){
			sum1 += a[i][j];
			sum2 += a[j][i];
			if(i==j)	sum1d += a[i][j];
			if(i+j==n+1)	sum2d += a[i][j];
		}
		if(i==1){
			if(sum1!=sum2)	return false;
			su += sum1;
		}else{
			if(su!=sum1 or su!=sum2)	return false;
		}
	}
	if(su!=sum1d or su!=sum2d)	return false;
	return true;
}

int main()
{
	ll n,i,j,k;
	cin>>n;
	int r=-1,c=-1;
	for(i=1;i<=n;i++){
		ll sum=0;
		for(j=1;j<=n;j++){
			cin>>a[i][j];
			sum += a[i][j];
			if(a[i][j]==0){
				r=i;c=j;
			}
		}
		v.pb(sum);
	}

	if(n==1){
		cout<<"1\n";
		return 0;
	}

	sort(v.begin(),v.end());

	if(v[0]!=v[1]){
		a[r][c] += v[1]-v[0];
	}

	if(check(n) and a[r][c]>0){
		cout<<a[r][c]<<"\n";
	}else{
		cout<<"-1\n";
	}

	return 0;
}