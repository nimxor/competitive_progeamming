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

int a[2*MAXM];
map<int,int> m;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=2*n;i++){
		scan(a[i]);
	}

	int maxm=0;
	for(i=1;i<=2*n;i++){
		if(m[a[i]]==1){
			m[a[i]]--;
			m.erase(a[i]);
		}else{
			m[a[i]]++;
		}
		maxm=max(maxm,(int)m.size());
	}
	cout<<maxm<<endl;
	return 0;
}