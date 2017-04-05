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
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e6+6;
const int MAXN = 2e6+1;

int a[MAXM];

int main()
{
	int n,i,j,k;

	scan(n);
	for(i=1;i<=n;i++){
		scan(a[i]);
	}

	sort(a+1,a+n+1);

	a[0]=-1;
	for(i=2;i<=n;i++){
		if(a[i]!=a[i-1]){
			break;
		}
	}

	for(j=n-1;j>=1;j--){
		if(a[j]!=a[j+1]){
			break;
		}
	}

	cout<<max(0,(j-i+1))<<endl;

	return 0;
}