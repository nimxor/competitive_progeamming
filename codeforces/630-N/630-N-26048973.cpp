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

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double y = b*b-4*a*c;
	if(y<0){
		printf("0.000000\n0.000000\n");
		return 0;
	}  
	double d = sqrt(y);
	double x1 = (-b+d)/(2*a);
	double x2 = (-b-d)/(2*a);
	printf("%0.8lf\n%0.8lf",max(x1,x2),min(x1,x2));
	return 0;
}