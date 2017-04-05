// Trick : At every stage bitwise or is taken from just previous leven not previous of previous level 

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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[MAXM];
set<int> curr,pre,ans;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}

	// for(i=1;i<=n;i++){
	// 	m[a[i]]=i;
	// 	for(auto it : m){
	// 		if(it.se==i-1)
	// 			m[it.fi|a[i]]=i;
	// 	}
	// }
	// cout<<m.size()<<"\n";
	
	for(i=1;i<=n;i++){
		curr.clear();
		curr.insert(a[i]);
		for(auto it : pre){
			curr.insert(it|a[i]);
		}
		pre=curr;
		for(auto it : pre){
			ans.insert(it);
		}
	}
	cout<<ans.size()<<"\n";
	return 0;
}