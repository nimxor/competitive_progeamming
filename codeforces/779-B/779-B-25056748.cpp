#pragma GCC optimize("O3")

#include<bits/stdc++.h>
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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

vector<int> v;

int main()
{
	ll n,i,j,k;
	cin>>n>>k;
	ll nn=n;
	if(nn==0){
		cout<<0<<endl;
		return 0;
	}
	while(nn){
		int p = nn%10;
		nn/=10;
		v.pb(p);
	}
	int cn=0,cnt=0;
	for(i=0;i<v.size();i++){
		if(v[i]==0){
			cn++;
			if(cn==k)	break;
		}else{
			cnt++;
		}
	}
	if(k>cn){
		cout<<(int)v.size()-1<<endl;
	}else{
		cout<<cnt<<endl;
	}
	return 0;
}