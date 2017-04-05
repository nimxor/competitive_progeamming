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

vector<pair<ll,ll> > vp;
map<char,ll> m;
stack<char> stk;
map<char,char> match;

void pree()
{
	m['{']=1;
	m['(']=1;
	m['<']=1;
	m['[']=1;
	m['}']=2;
	m[')']=2;
	m['>']=2;
	m[']']=2;
	match['(']=')';
	match['<']='>';
	match['{']='}';
	match['[']=']';
}

int main()
{
	pree();
	string s;
	cin>>s;
	int n,i,j,k;
	n = s.length();
	int cn=0;
	for(i=0;i<n;i++){
		if(m[s[i]]==1){
			stk.push(s[i]);
		}else{
			if(stk.empty()){
				cout<<"Impossible\n";
				return 0;
			}
			char p = stk.top();
			if(match[p]!=s[i]){
				cn++;
			}
			stk.pop();
		}
	}
	if(!stk.empty()){
		cout<<"Impossible\n";
		return 0;
	}
	cout<<cn<<endl;
	return 0;
}