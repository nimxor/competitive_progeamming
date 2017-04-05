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
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)

const int MAXM = 2e5+5;
ll a[MAXM];

int main()
{
	int n,i,j,k;
	cin>>n;

	int l,r;
	ll minm=INT_MAX;
	for(i=1;i<=n;i++){
		int p = n/i;
		if(p*i==n ){
			if(minm>abs(p-i)){
				minm=abs(p-i);
				l=p;
				r=i;
			}
		}
	}

	cout<<min(l,r)<<" "<<max(l,r);
	return 0;
}