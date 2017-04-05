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
const int MAXM = 1e3+5;
const int MAXN = 1e6+4;

map<char,char> m;

int main()
{
	string s;
	cin>>s;

	int n,i,j,k;
	string ss;
	cin>>n;

	int ans=0;
	for(i=1;i<=n;i++){
		int cnta=0,cntb=0;
		cin>>ss;
		for(j=0;j<s.length();j++){
			if(s[j]!=ss[0] and s[j]!=ss[1]){
				ans += min(cnta,cntb);
				cnta=0;cntb=0;
			}else{
				cnta+=(s[j]==ss[0]);
				cntb+=(s[j]==ss[1]);
			}
		}
		ans += min(cnta,cntb);
	}

	cout<<ans<<endl;
	return 0;
}