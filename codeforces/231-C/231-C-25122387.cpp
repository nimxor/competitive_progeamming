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

const ll inf = 1e8;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

ll pre[MAXM],a[MAXM];

int main()
{
	int n,m,i,j,k;
	scan(n);scan(m);

	for(i=1;i<=n;i++){
		scanl(a[i]);
	}

	sort(a+1,a+n+1);
	
	for(i=1;i<=n;i++){
		pre[i]=pre[i-1]+a[i];
		// cout<<pre[i]<<endl;
	}

	ll Ans1=-1,Ans2=-1;
	
	for(i=1;i<=n;i++){
		// if(i!=4)	continue;
		int lo = 0,hi = i;
		while(lo<=hi){
			ll mid = lo+(hi-lo+1)/2;
			ll Ans = pre[i]-pre[mid];
			ll ne = i-mid;
			if(1LL*ne*a[i]<=Ans+m){
				hi = mid-1;
				if(Ans1<ne){
					Ans1=ne;
					Ans2=a[i];
				}
			}else{
				lo = mid+1;
			}
		}
	}

	cout<<Ans1<<" "<<Ans2<<endl;
	return 0;
}