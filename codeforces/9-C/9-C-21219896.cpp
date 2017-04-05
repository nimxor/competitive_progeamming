#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 2e3+5;
const int MAXN = 5e5+5; 

int a[101],b[101];
bool visit[101];

double convert(ll n)
{
	double p = 0.00;
	int cn=-1;
	while(n)
	{
		cn++;
		int x = n%2;
		if(x)
			p=p+pow(10.00,cn);
		n/=2;
	}
	return p;
}

int main()
{
	ll n,i,j,k;
	cin>>n;

	ll cn=0;
	for(i=1;i<10000;i++){
		ll x = convert(i);
		if(x>n)	break;
		cn++;
	}
	cout<<cn<<endl;
	return 0;
}