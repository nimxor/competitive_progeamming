#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e1+5; 
const double pi = acos(-1.0);

ll m,maxm=INT_MAX;
vector<int> Ans;

bool solve(ll n,vector<int> v)
{
	if(n>m)	return false;
	if(n==m){
		if(v.size()<maxm){
			maxm=v.size();
			Ans=v;
		}
		return true;
	}
	bool ans=false;
	v.pb(2*n);
	ans |= solve(2*n,v);
	v.pop_back();
	v.pb(10*n+1);
	ans |= solve(10*n+1,v);
	v.pop_back();
	return ans;
}

int main()
{	
	ll i,j,k,n;
	cin>>n>>m;
	vector<int> v;
	bool p = solve(n,v);

	if(p==true){
		cout<<"YES"<<endl;
		cout<<Ans.size()+1<<endl;
		cout<<n<<" ";
		for(i=0;i<Ans.size();i++){
			cout<<Ans[i]<<" ";
		}
	}else{
		cout<<"NO"<<endl;
	}	
	return 0;
}