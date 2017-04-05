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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[6],b[6];

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>k;
		a[k]++;
	}
	for(i=1;i<=n;i++){
		cin>>k;
		b[k]++;
	}
	for(k=1;k<=5;k++){
		if((a[k]+b[k])&1){
			cout<<-1<<endl;
			return 0;
		}
	}
	int cn = 0;
	for(i=1;i<=5;i++){
		if(a[i]>=b[i]){
			int p = a[i]-b[i];
			cn+=p/2;
		}else{
			int p = b[i]-a[i];
			cn+=p/2;
		}
	}
	cout<<cn/2<<endl;
	return 0;
}