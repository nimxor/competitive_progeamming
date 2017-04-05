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
const int MAXM = 5e5+5;
const int MAXN = 1e6+4;

vector<pair<ll,ll> > v,Ans;
map<char,ll> m;

int main()
{
	int n,k,i,j;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		int x,y;
		scan(x);scan(y);
		v.pb(mp(x,-1));
		v.pb(mp(y,1));
	}
	sort(all(v));
	int open=0,close=0,cnt=0;
	for(i=0;i<v.size();i++){
		if(cnt==k-1 and v[i].se==-1){
			open = v[i].fi;
		}
		if(cnt==k and v[i].se==1){
			Ans.pb(mp(open,v[i].fi));
		}
		cnt -= v[i].se;
	}
	cout<<Ans.size()<<endl;
	for(i=0;i<Ans.size();i++){
		cout<<Ans[i].fi<<" "<<Ans[i].se<<endl;
	}
	return 0;
}