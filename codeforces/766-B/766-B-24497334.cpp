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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;
const int SIZE = 2;
const int MSB = 30;

ll a[MAXM];

bool check(ll x,ll y,ll z)
{
	return x+y>z && x+z>y && y+z>x;
}

int main()
{
	int n,i;
	scan(n);
	for(i=1;i<=n;i++){
		scanl(a[i]);
	}

	sort(a+1,a+1+n);

	int f=0;
	for(i=3;i<=n;i++){
		if(check(a[i],a[i-1],a[i-2])){
			f=1;
			break;
		}
	}

	if(f){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
    return 0;
}