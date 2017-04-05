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

const int inf = 1e7;
const int MAXM = 1e4+5;
const int MAXN = 3e3+4;

vector<int> v;

int main()
{
	int n,m,k,i,j;
	cin>>n>>m>>k;
	for(i=0;i<k;i++)	v.pb(1);
	v.pb(n);
	for(i=1;i<k;i++)	v.pb(n+1);

	while(v.back()+n-1 < n+m+1)	v.pb(v.back()+n-1);
	cout<<(int)v.size()<<endl;
	for(i=0;i<v.size();i++)	cout<<v[i]<<" ";
	return 0;
}