#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;
int a[MAXM];

int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int dp[8]={0,7,6,5,4,3,2,1};

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	int p = arr[n-1];
	int xx = dp[m];
	p-=xx;
	int cn=0;
	cn++;
	cn+=(p/7);
	if(p%7!=0){
		cn++;
	}
	cout<<cn<<endl;
	return 0;
}