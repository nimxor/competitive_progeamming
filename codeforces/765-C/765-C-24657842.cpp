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

int visit[27];
map<string,int> m1,m2;

int main()
{
	ll a,b,i,j,k;
	scanl(k);
	scanl(a);
	scanl(b);
	ll cn = 0;
	// while(a>=k){
	// 	a-=k;
	// 	cn++;
	// }
	// while(b>=k){
	// 	b-=k;
	// 	cn++;
	// }
	ll maxm = max(a,b);
	if(maxm<k){
		cout<<-1<<endl;
		return 0;
	}
	if(a==0 || b==0){
		if(a==0){
			if(b%k!=0){
				cout<<-1<<endl;
				return 0;
			}
		}
		if(b==0){
			if(a%k!=0){
				cout<<-1<<endl;
				return 0;
			}
		}
	}
	ll x = a/k;
	ll y = b/k;
	ll p1 = a%k;
	ll p2 = b%k;
	if(p1!=0 and y==0){
		cout<<-1<<endl;
		return 0;
	}
	if(p2!=0 and x==0){
		cout<<-1<<endl;
		return 0;
	}
	cn+=(x+y);
	cout<<cn<<endl;
	return 0;
}