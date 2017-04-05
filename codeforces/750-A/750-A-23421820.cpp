#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a) printf("%d ",a)
#define printl(a) printf("%lld ",a)

const int MAXM = 1e6+5;
int a[MAXM];
vector<int> v;

void solve(int n)
{
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i==n/i){
				v.pb(i);
				continue;
			}
			v.pb(i);
			v.pb(n/i);
		}
	}
}

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	int p = 4*60;
	p-=m;
	int su=0,c=0;
	for(i=1;i<=n;i++){
		su+=i*5;
		if(su>p)	break;
		c++;
	}
	cout<<c<<endl;
	return 0;
}