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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

char str[MAXM];
string s;

void solve(int l,int r,int k)
{
	l--;r--;
	string ss = s.substr(l,r-l+1);
	string st = ss;
	int np = r-l+1;
	k%=(np);
	for(int i=0;i<np;i++){
		int p = (i+k)%np;
		st[p] = ss[i];
	}
	s = s.substr(0,l)+st+s.substr(r+1);
}

int main()
{
	int t,i,j,k;
	cin>>s;
	cin>>t;
	while(t--)
	{
		int l,r,k;
		scan(l);scan(r);scan(k);
		solve(l,r,k);
	}
	cout<<s<<endl;
	return 0;
}