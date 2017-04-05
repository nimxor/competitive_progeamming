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
ll dp[65][2][2][2][2];
string s1 , s2;

string convert(ll n)
{
	string sp="";
	while(n){
		int p = n%2;
		sp = sp + (char)(p+'0');
		n/=2;
	}
	reverse(all(sp));
	return sp;
}

ll solve(int p,int al,int ar,int bl,int br)
{
	if(p==s1.length())	return 0;
	if(dp[p][al][ar][bl][br]!=-1)	return dp[p][al][ar][bl][br];
	ll ret = 0;
	int mal = 0,mar = 1,mbl = 0,mbr = 1;
	if(al==0 and s1[p]=='1')	mal = 1;
	if(ar==0 and s2[p]=='0')	mar = 0;
	if(bl==0 and s1[p]=='1')	mbl = 1;
	if(br==0 and s2[p]=='0')	mbr = 0;
	for(int i=mal;i<=mar;i++){
		for(int j=mbl;j<=mbr;j++){
			ll ans = 0;
			int pp = (i^j);
			if(pp==1){
				int mask = s1.length()-p-1;
				ans += (1LL<<mask);
			}
			int all=al,arr=ar,bll=bl,brr=br;
			if(s1[p]-'0'<i)	all=1;
			if(s2[p]-'0'>i)	arr=1;
			if(s1[p]-'0'<j)	bll=1;
			if(s2[p]-'0'>j)	brr=1;
			ret = max(ret,ans+solve(p+1,all,arr,bll,brr));
		}
	}
	return dp[p][al][ar][bl][br] = ret;	
}

ll go(ll l,ll r)
{
	mset(dp,-1);
	s1 = convert(l);
	s2 = convert(r);
	// cout<<s1<<" "<<s2<<endl;
	while(s1.length() < s2.length()){
		s1 = "0" + s1;
	}
	// cout<<s1<<" "<<s2<<endl;
	ll Ans = solve(0,0,0,0,0);
	return Ans;
}

int main()
{
	ll l,r,i,j,k;
	scanl(l);scanl(r);
	printf("%lld\n",go(l,r));
	return 0;
}