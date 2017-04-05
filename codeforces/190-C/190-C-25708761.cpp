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
#define pi 3.14159265358979323

const int inf = 1e7;
const int MAXM = 1e4+5;
const int MAXN = 3e3+4;

int gg = 0;
string ss="";
string s;
void solve()
{
	if(cin>>s){
		ss += s;
		if(s=="pair"){
			ss += '<';
			solve();
			ss += ',';
			solve();
			ss += '>';
		}
	}else{
		gg=1;
	}
	return ;
}

int main()
{
	int n,i,j,k;
	cin>>n;
	solve();
	if(cin>>s or gg==1)	cout<<"Error occurred\n";
	else	cout<<ss<<endl;
	return 0;
}