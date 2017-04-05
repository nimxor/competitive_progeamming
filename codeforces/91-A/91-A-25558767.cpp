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
const int MAXM = 1e6+5;
const int MAXN = 1e6+4;

string s1,s2;
vector<int> v[27];
set<int> s;

int main()
{
	int i,j,k;
	cin>>s1>>s2;
	int n = s1.length();
	int m = s2.length();
	for(i=0;i<n;i++){
		s.insert(s1[i]-'a');
		v[s1[i]-'a'].pb(i);
	}
	for(i=0;i<m;i++){
		if(s.find(s2[i]-'a')==s.end()){
			printf("-1\n");
			return 0;
		}
	}
	j=-1;
	int cnt = 1;
	for(i=0;i<m;i++){
		int x = s2[i]-'a';
		int p = lower_bound(v[x].begin(),v[x].end(),j+1)-v[x].begin();
		if(p==v[x].size()){
			cnt++;
			j=v[x][0];
		}else{
			j=v[x][p];
		}
	}
	cout<<cnt<<endl;
	return 0;
}