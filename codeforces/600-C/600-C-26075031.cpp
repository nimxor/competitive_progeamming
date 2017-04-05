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
const int MAXM = 1e6+5;
const int MAXN = 1e6+4;

int a[27],b[27];

int main()
{
	string s,ss;
	cin>>s;
	int n = s.length(),i,j,k;
	for(i=0;i<n;i++){
		a[s[i]-'a']++;
		b[s[i]-'a']++;
	}
	// cout<<"he"<<endl;
	for(i=0;i<26;i++){
		a[i]%=2;
	}
	// cout<<"he"<<endl;
	// for(i=0;i<26;i++){
	// 	cout<<b[i]<<" ";
	// }
	// cout<<endl;
	// for(i=0;i<26;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	for(i=0,j=25;i<26 and j>=0;){
		// cout<<i<<" "<<j<<endl;
		if(i>j)	break;
		if(a[i]==1 and a[j]==1){
			b[j]--;
			b[i]++;
			i++;
			j--;
		}else if(a[i]==1){
			j--;
		}else if(a[j]==1){
			i++;
		}else{
			i++;
			j--;
		}
	}
	// cout<<"he"<<endl;
	// for(i=0;i<26;i++){
	// 	cout<<b[i]<<" ";
	// }
	// cout<<endl;
	// for(i=0;i<26;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;	
	s = "";
	ss = "";
	for(i=0;i<26;i++){
		if(b[i])
		while(b[i]>1){
			s += (char)('a'+i);
			ss = (char)('a'+i)+ss;
			b[i]-=2;
		}
	}
	int p=-1;
	for(i=0;i<26;i++){
		if(b[i]){
			p=i;
		}
	}
	if(p!=-1){
		string sp = s + (char)(p+'a') + ss;
		cout<<sp<<endl;
	}else{
		string sp = s+ss;
		cout<<sp<<endl;
	}
	return 0;
}