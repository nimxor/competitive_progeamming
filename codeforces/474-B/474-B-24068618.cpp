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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;
int a[MAXM],ff=0,cum[MAXM];
vector<ll>v[MAXM];
int n;

int search(int x)
{
	int ret = -1;
	int lo = 0,hi = n;
	while(lo<=hi){
		int mid = lo+(hi-lo+1)/2;
		if(cum[mid] > x){
			ret = mid;
			hi = mid-1;
		}else{
			lo = mid+1;
		}
	}
	return ret;
}

int main()
{
	int m,i,j,k;
	scan(n);
	cum[0]=1;
	for(i=1;i<=n;i++){
		scan(a[i]);
		cum[i] = a[i] + cum[i-1];
	}

	scan(k);
	while(k--)
	{
		int x;
		scan(x);
		cout<<search(x)<<endl;
	}
	return 0;
}