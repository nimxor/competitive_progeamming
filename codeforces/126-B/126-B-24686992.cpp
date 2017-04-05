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
const int MAXM = 1e6+6;
const int MAXN = 10+4;
const int m = 1e7+1;

ll has[MAXM],pw[MAXM];
string s;
int n;

void pre()
{
	pw[0]=1;
	for(int i=1;i<MAXM;i++)	pw[i]=31*pw[i-1];
	for(int i=1;i<=n;i++){
		has[i] = has[i-1]*31 + s[i-1]-'a'+1;
	}
}

ll find(ll x,ll y)
{
	return (has[y]-has[x-1]*pw[y-x+1]);
}

bool cal(int len)
{
	// cout<<len<<endl;
	ll h1 = find(1,len);
	for(int i=2;i<=n-len;i++){
		if(find(i,i+len-1)==h1){
			return true;
		}
	}
	return false;
}

bool cal2(int len)
{
	ll h1 = find(n-len+1,n);
	for(int i=2;i<=n-len;i++){
		if(find(i,i+len-1)==h1){
			return true;
		}
	}
	return false;
}

int main()
{
	int i,j,k;
	cin>>s;
	n = s.length();
	pre();
	int lo=1,hi=n,pref=-1;
	while(lo<=hi){
		int mid = lo+(hi-lo+1)/2;
		if(cal(mid)){
			lo = mid+1;
			pref=mid;
		}else{
			hi=mid-1;
		}
	}
	if(pref==-1){
		cout<<"Just a legend\n";
		return 0;
	}
	// for(i=0;i<pref;i++){
	// 	cout<<s[i];
	// }
	// cout<<endl;
	lo=1,hi=n;
	int suff=-1;
	while(lo<=hi){
		int mid = lo+(hi-lo+1)/2;
		if(cal2(mid)){
			lo = mid+1;
			suff = mid;
		}else{
			hi=mid-1;
		}
	}
	// cout<<pref<<" "<<suff<<endl;
	if(suff == -1){
		cout<<"Just a legend\n";
		return 0;
	}
	int ans = -1;
	for(i=min(pref,suff);i>=1;i--){
		if(find(1,i)==find(n-i+1,n)){
			ans=i;
			break;
		}
	}
	if(ans == -1){
		cout<<"Just a legend\n";
		return 0;
	}
	for(int i=0; i<ans; i++)
		cout<<s[i];
	cout<<endl;
	return 0;
}