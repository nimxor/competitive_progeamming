#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e2+5;
const int MAXN = 5e2+5; 

map<ll,ll> mm;

int main()
{
	ll n,m,i,j,k;
	cin>>n>>m;

	ll a[n+1];

	for(i=1;i<=n;i++){
		cin>>a[i];
		mm[a[i]]++;
	}

	ll p = n/m;
	ll q = n%m;
	ll ans=0;

	while(true)
	{
		bool flag=true;
		int x;
		for(i=1;i<=m;i++){
			if(mm[i]<p){
				flag=false;
				x=i;
			}
		}
		if(flag)	break;
		int q=0;
		for(i=1;i<=n;i++){
			if(a[i]>m){
				q=i;
				break;
			}
		}

		if(q==0){
			for(i=1;i<=n;i++){
				if(mm[a[i]]>p){
					mm[a[i]]--;
					q=i;
					break;
				}
			}
		}
		a[q]=x;
		// cout<<q<<" "<<x<<endl;
		mm[x]++;
		ans++;
	}

	cout<<p<<" "<<ans<<endl;
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}