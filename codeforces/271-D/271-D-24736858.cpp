#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 10000000019
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 1e6+4;
const int ma = 1e5+5;

int Bad[26];
set<ll> hs[1501];

int main()
{
	int i,j,k;
	string s;
	cin>>s;
	string st;
	cin>>st;
	for(i=0;i<st.size();i++){
		if(st[i]=='1')	Bad[i]++;
	} 
	cin>>k;
	for(i=0;i<s.size();i++){
		ll has=0,cn=0;
		for(j=i;j<s.size();j++){
			if(!Bad[s[j]-'a']) cn++;
			if(cn>k)	break;
			has=has*29+(s[j]-'a');
			hs[j-i+1].insert(has);
		}
	}
	ll ans=0;
	for(i=1;i<=s.size();i++){
		ans+=hs[i].size();
	}
	printf("%lld\n",ans);
	return 0;
}