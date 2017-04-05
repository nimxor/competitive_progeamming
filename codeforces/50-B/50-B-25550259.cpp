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

const ll inf = 1e17;
const int MAXM = 4e2+5;
const int MAXN = 1e6+4;

ll a[256];

int main()
{
	string s;
	cin>>s;
	int i,j,k,n = s.length();
	for(i=0;i<n;i++){
		a[s[i]]++;
	}
	ll su = 0;
	for(i=0;i<256;i++){
		if(a[i]){
			su += (a[i]*a[i]);
		}
	}
	cout<<su<<endl;
	return 0;
}