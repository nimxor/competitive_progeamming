#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)

const ll maxi = 1e17;
const int MAXM = 1e6+5;
map<string,int> hash1,hash2;
vector<string> v;

int main()    
{
	string s;
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>s;
		v.push_back(s);
		hash1[s]=1;
	}
	for(i=0;i<m;i++){
		cin>>s;
		hash2[s]=1;
	}
	int cc=0;
	for(i=0;i<n;i++){
		if(hash2[v[i]]==1 && hash1[v[i]]==1){
			cc++;
		}
	}

	if(n>m){
		cout<<"YES\n";
	}else if(m>n){
		cout<<"NO\n";
	}else{
		if(cc==0){
			cout<<"NO\n";
			return 0;
		}
		if(cc&1){
			cout<<"YES\n";
		}else {
			cout<<"NO\n";
		}
	}
    return 0;
}