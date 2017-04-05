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
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int main()
{
	int n,m,i,j,k,lcm;

	cin>>n>>m>>k;

	lcm = (n/__gcd(n,m))*m;

	cout<<k/lcm<<endl;
	
    return 0;
}