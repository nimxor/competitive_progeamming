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
const int MAXM = 1e6+6;
const int MAXN = 2e6+1;

int a[MAXM];
vector<int> v1,v2,v[MAXM];
ll l,r;

ll solve(ll n,ll le,ll re)
{
	if(re<l or le>r)	return 0;
	if(le==re)	return n;
	ll mid = (le+re)>>1;
	return solve(n/2,le,mid-1)+solve(n%2,mid,mid)+solve(n/2,mid+1,re);
}

int main()
{
	ll n,i,j,k;

	scanl(n);
	scanl(l);
	scanl(r);

	ll nn = n;

	ll cn=0;
	while(nn){
		nn/=2;
		cn++;
	}

	cout<<solve(n,1,(1LL<<cn)-1)<<endl;

	return 0;
}