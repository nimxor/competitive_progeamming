#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a,s) printf("Case #%d: %s\n",a,s)

const int MAXM = 1e5+4;
ll a[MAXM];
map<char,int> m;

int main()
{
	int c=0;
	string s;
	getline(cin,s);
	int n = s.length();
	string ss = "Bulbasaur";
	for(int i=0;i<n;i++){
		m[s[i]]++;
	}
	int minm=1e8;
	minm=min(minm,m['B']);
	minm=min(minm,m['u']/2);
	minm=min(minm,m['a']/2);
	minm=min(minm,m['b']);
	minm=min(minm,m['s']);
	minm=min(minm,m['r']);
	minm=min(minm,m['l']);
	cout<<minm<<endl;
	return 0;
}