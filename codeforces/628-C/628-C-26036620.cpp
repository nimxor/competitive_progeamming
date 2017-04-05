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
const int MAXM = 3e5+5;
const int MAXN = 1e6+4;

char str[MAXM];

int main()
{
	string s;
	int n,k,i,j;
	cin>>n>>k;
	scanf("%s",str);
	s = str;
	for(i=0;i<n;i++){
		int p = 'z'-s[i];
		int q = s[i]-'a';
		int minm = max(p,q);
		int x = k;
		k -= minm;
		if(k<0){
			if(minm==p)
				s[i]=s[i]+x;
			else
				s[i]=s[i]-x;
			break;
		}else{
			if(minm==p)
				s[i]='z';
			else
				s[i]='a';
		}
	}
	if(k>0){
		cout<<"-1\n";
	}else{
		cout<<s<<"\n";
	}
	return 0;
}