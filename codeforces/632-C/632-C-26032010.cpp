#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define all(x) x.begin(),x.end()
#define se second
#define fi first
#define pi 3.14159265358979323
 
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 5e4+5;
const int MAXN = 1e4+4;

string s[MAXM],ore[MAXM];
vector<string> v;

bool cmp(string s1,string s2){
	return s1+s2<s2+s1;
}

int main()
{
	int n,i,j,k;
	cin>>n;
	int maxm=0;
	for(i=1;i<=n;i++){
		cin>>s[i];
		v.pb(s[i]);
		maxm=max(maxm,(int)s[i].length());
	}
	// for(i=1;i<=n;i++){
	// 	int p = s[i].length();
	// 	for(j=p;j<=maxm;j++){
	// 		s[i] += 'z';
	// 	}
	// 	v.pb(mp(s[i],i));
	// }
	sort(all(v),cmp);
	for(i=0;i<v.size();i++){
		cout<<v[i];
	}
	cout<<endl;
	return 0;
}