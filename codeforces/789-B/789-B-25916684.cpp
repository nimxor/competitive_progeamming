#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
// #define mod 1000000007
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
const int MAXM = 1e7+1;
const int MAXN = 1e4+4;

set<ll> s;
ll a[MAXM];

int main()
{
	ll b1,q,l,m,i,j,k;
	cin>>b1>>q>>l>>m;
	for(i=1;i<=m;i++){
		scanl(k);
		s.insert(k);
	}
	if(abs(b1)>l){
		cout<<"0\n";
		return 0;
	}
	if(b1==0){
		if(s.find(b1)!=s.end()){
			cout<<"0\n";
		}else{
			cout<<"inf\n";
		}
		return 0;
	}
	if(q==0){
		if(s.find(0)!=s.end()){
			if(s.find(b1)!=s.end()){
				cout<<"0\n";
			}else{
				if(abs(b1)>l){
					cout<<"0\n";
				}else{
					cout<<"1\n";
				}
			}
		}else{
			cout<<"inf\n";
		}
		return 0;
	}
	if(q==1){
		if(abs(b1)>l){
			cout<<"0\n";
		}
		else if(s.find(b1)!=s.end()){
			cout<<"0\n";
		}else{
			cout<<"inf\n";
		}
	}else if(q==-1){
		int c=0;
		if(abs(b1)>l){
			cout<<"0\n";
			return 0;
		}
		if(s.find(b1)!=s.end()){
			c++;
		}
		if(s.find(-b1)!=s.end()){
			c++;
		}
		if(c==2){
			cout<<"0\n";
		}else{
			cout<<"inf\n";
		}
	}else{
		int c=0;
		for(i=1;i<100;i++){
			if(abs(b1)>l)	break;
			if(s.find(b1)==s.end()){
				c++;
			}
			b1 = q*b1;
		}
		cout<<c<<endl;
	}
	return 0;
}