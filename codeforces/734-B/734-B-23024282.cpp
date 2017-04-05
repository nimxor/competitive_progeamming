// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/explorers-birthday/description/

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

const int MAXM = 2e5+5;
const int MAXN = 5e1+5;
ll a[MAXM],b[MAXM],c[MAXM];
map<ll,ll> mm;

int main()
{
	int k1,k2,k3,k4;
	cin>>k1>>k2>>k3>>k4;

	int m = min(k4,min(k1,k3));

	k1-=m;k3-=m;k4-=m;

	ll ans = 1LL*m*256;

	ll x = min(k1,k2);

	k1-=x;
	k2-=x;

	ans+=(1LL*x*32);

	cout<<ans<<endl;
   	return 0;
}