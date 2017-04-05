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
#define se second
#define fi first
#define pi 3.14159265358979323
 
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
//     tree_order_statistics_node_update>;

const ll inf = 1e17;
const int MAXM = 1e2+15;
const int MAXN = 1e4+4;

ll a[MAXM];

map<char,int> m;

void pree()
{
	m['A']=1;
	m['H']=1;
	m['I']=1;
	m['M']=1;
	m['O']=1;
	m['o']=1;
	m['T']=1;
	m['U']=1;
	m['V']=1;
	m['v']=1;
	m['W']=1;
	m['w']=1;
	m['X']=1;
	m['x']=1;
	m['Y']=1;
}

int main()
{
	pree();
	string s;
	cin>>s;
	int n = s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='b' and s[n-i-1]=='d')	continue;
		if(s[i]=='d' and s[n-i-1]=='b')	continue;
		if(s[i]=='p' and s[n-i-1]=='q')	continue;
		if(s[i]=='q' and s[n-i-1]=='p')	continue;
		if(m[s[i]]==0){
			cout<<"NIE\n";
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]=='b' and s[n-i-1]=='d')	continue;
		if(s[i]=='d' and s[n-i-1]=='b')	continue;
		if(s[i]=='p' and s[n-i-1]=='q')	continue;
		if(s[i]=='q' and s[n-i-1]=='p')	continue;
		if(s[i]!=s[n-i-1]){
			cout<<"NIE\n";
			return 0;
		}
	}
	cout<<"TAK\n";
	return 0;
}