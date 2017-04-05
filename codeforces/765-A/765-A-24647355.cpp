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
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 10+4;

int a[MAXM];
map<string,int> m1,m2;

int main()
{
	int n,i,j,k;
	cin>>n;
	string s1[102],s2,s;
	cin>>s;
	for(i=1;i<=n;i++){
		cin>>s1[i];
		string sp = s1[i].substr(0,3);
		string sq = s1[i].substr(5);
		// cout<<sp<<" "<<sq<<endl;
		m1[sq]++;
		m2[sq]++;
	}
	if(m1[s]==n/2 and m2[s]==n/2 and !(n&1)){
		cout<<"home\n";
	}else{
		cout<<"contest\n";
	}
	return 0;
}