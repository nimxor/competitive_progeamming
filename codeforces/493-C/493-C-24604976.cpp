#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 2e5+6;
const int MAXN = 2e2+4;

ll b[MAXM];
ll a[MAXM];
ll su[MAXM];
set<ll> s;
vector<ll> v;

int main()
{
	ll n,m,i,j,k;

	scanl(n);
	s.insert(0);
	s.insert(2e9+5);
	for(i=1;i<=n;i++){
		scanl(a[i]);
		s.insert(a[i]);
	}

	scanl(m);
	for(i=1;i<=m;i++){
		scanl(b[i]);
		s.insert(b[i]);
	}

	sort(a+1,a+1+n);
	sort(b+1,b+1+m);

	for(auto it : s){
		v.pb(it);
	}

	ll maxm = -1e10,a1=0,a2=0;

	for(i=0;i<v.size();i++){
		int pos1 = lower_bound(b+1,b+1+m,v[i]+1)-b;
		int pos2 = lower_bound(a+1,a+1+n,v[i]+1)-a;
		// cout<<pos2<<" "<<pos1<<endl;
		ll p1 = (pos2-1)*2+(n-pos2+1)*3;
		ll p2 = (pos1-1)*2+(m-pos1+1)*3;
		// cout<<p1<<" "<<p2<<endl;
		if(p1-p2>=maxm){
			if(maxm==p1-p2){
				if(p1>a1){
					a1=p1;
					a2=p2;
				}
			}else{
				maxm=p1-p2;
				a1=p1;
				a2=p2;
			}
		}
	}

	cout<<a1<<":"<<a2<<endl;

	return 0;
}