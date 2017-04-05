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

vector<int> v,vv;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>k;
		vv.pb(k);
	}
	for(i=1;i*i<=n;i++){
		if(n%i==0){
			if(i*3<=n){
				v.pb(i);
			}
			int p = n/i;
			if(p*3<=n){
				v.pb(p);
			}
		}
	}

	int p = vv.size();
	for(i=0;i<p;i++){
		vv.pb(vv[i]);
	}

	for(i=0;i<v.size();i++){
		for(k=0;k<=v[i];k++){
			int f=1,cn=0;
			for(j=k;j<vv.size();j+=v[i]){
				cn++;
				if(vv[j]==0){
					f=0;
					break;
				}
			}
			if(f and cn>=3){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}