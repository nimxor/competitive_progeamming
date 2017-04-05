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
const int MAXM = 1e4+5;
const int MAXN = 1e6+4;

int a[MAXM];
vector<ll> v;

int main()
{
	ll n,i,j,k;
	for(n=1;n<=10;n++){
		for(i=1;i<=(1<<n);i++){
			ll num=0;
			for(j=0;j<n;j++){
				if(i&(1<<j)){
					num=num*10+7;
				}else{
					num=num*10+4;
				}
			}
			v.pb(num);
		}
	}
	sort(v.begin(),v.end());
	ll l,r;
	cin>>l>>r;
	int pos = lower_bound(v.begin(),v.end(),l)-v.begin();

	ll pre=l,Ans=0;
	while(r>=v[pos]){
		ll x = min(v[pos],r);
		ll curr=x-pre+1;
		if(curr>0)
			Ans += (curr*v[pos]);
		pre=v[pos]+1;
		pos++;
	}

	r=r-pre+1;
	Ans += r*v[pos];

	cout<<Ans<<endl;

	return 0;
}