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


int main()
{
	int n,i,j,k;
	cin>>n;
	int x = 1;
	ll cn=0,p=9;
	while(n>=0){
		if(n<p){
			cn+=(1LL*x*n);
			break;
		}
		n-=p;
		cn+=(1LL*p*x);
		x++;
		p*=10;
	}
	cout<<cn<<endl;
	return 0;
}