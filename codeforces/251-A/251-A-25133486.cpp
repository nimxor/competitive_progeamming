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

ll a[MAXM],pre[MAXM];

int main()
{
	ll n,d,i,j,k;
	cin>>n>>d;
	for(i=1;i<=n;i++){
		scanl(a[i]);
		pre[i]=a[i]+pre[i-1];
	}
	
	if(n<3){
		cout<<"0\n";
		return 0;
	}

	i=1,j=1;
	ll Ans = 0,pr=-1,f=0;
	while(i<=n and j<=n){
		if(a[j]-a[i]>d){
			j--;
			ll p = (j-i+1);
			if(pr==-1){
				Ans += (p*(p-1)*(p-2))/6;
			}
			else{
				Ans += (p*(p-1)*(p-2))/6;
				p = pr-i+1;
				if(p>2)
				Ans -= (p*(p-1)*(p-2))/6;
			}
			i++;
			pr = j;
			f=1;
		}else{
			f=0;
			j++;
		}
	}

	// cout<<Ans<<endl;

	if(f==0){
		j--;
		ll p = (j-i+1);
		if(pr==-1){
			Ans += (p*(p-1)*(p-2))/6;
			// cout<<Ans<<endl;
		}
		else{
			Ans += (p*(p-1)*(p-2))/6;
			p = pr-i+1;
			if(p>2)
			Ans -= (p*(p-1)*(p-2))/6;
		}
	}

	cout<<Ans<<"\n";
	return 0;
}