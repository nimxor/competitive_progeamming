#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scs(a) scanf("%s",a)


int main()
{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;

	ll x=abs(a-c);
	
	ll y=abs(b-d);
	
	printf("%lld",max(x,y));
	return 0;
}

/*
0 0
4 5
*/