#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

int main()
{
	double a,b,c,i,j,k,d;
	ll n;
	cin>>a>>b>>d;
	if(d==0 && a==b)
		cout<<"YES"<<endl;
	else
	{
		n=(b-a)/d + 1;
		if(n<=0)
			cout<<"NO"<<endl;
		else if(b==a+(n-1)*d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}