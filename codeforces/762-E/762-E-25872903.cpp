// http://codeforces.com/problemset/problem/678/E

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
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
 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;

const ll inf = 1e7;
const int MAXM = 1e5+9;
const int MAXN = 1e4+4;

struct pole{
	int x,r,f;
	// bool operator<(const pole &rh) const
 //    {
 //        return r < rh.r;
 //    }
};

bool cmp(pole fir,pole sec){
	return fir.r<sec.r;
}

ordered_set<int> sets[MAXM];
pole p[MAXM];

int main()
{
	int n,i,j,k;
	scan(n);scan(k);
	for(i=0;i<n;i++){
		scan(p[i].x);scan(p[i].r);scan(p[i].f);
		sets[p[i].f].insert(p[i].x);
	}
	ll ans=0;
	sort(p,p+n,cmp);
	for(i=0;i<n;i++){
		for(j=max(1,p[i].f-k);j<=min(10000,p[i].f+k);j++){
			ans += sets[j].order_of_key(p[i].x+p[i].r+1)-sets[j].order_of_key(p[i].x-p[i].r);
		}
		sets[p[i].f].erase(p[i].x);
	}
	cout<<ans-n<<endl;
	return 0;
}