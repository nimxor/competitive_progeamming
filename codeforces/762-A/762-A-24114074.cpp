#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e17;
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;
vector<ll> v;

int main()
{
	ll n,k,i,j;
	cin>>n>>k;


	for(i=1;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i){
				v.pb(i);
				continue;
			}
			v.pb(i);
			v.pb(n/i);
		}
	}
	sort(v.begin(),v.end());
	if(v.size()<k){
		printf("-1\n");
	}else
		cout<<v[k-1]<<endl;
}