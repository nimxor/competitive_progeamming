#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scs(a) scanf("%s",a)

ll check(ll n)
{
	if(n==0 || n==9 || n==6)
		return 6;
	else if(n==1)
		return 2;
	else if(n==2 || n==3 ||n==5)
		return 5;
	else if(n==4)
		return 4;
	else if(n==7)
		return 3;
	else return 7;
}

int main()
{
	ll a,b,i,j,k;
	cin>>a>>b;
	ll sum=0;
	ll x;
	for(i=a;i<=b;i++)
	{
		j=i;
		while(j!=0)
		{
			x=j%10;
			j/=10;
			sum+=check(x);
		}
	}
	
	cout<<sum<<endl;
	return 0;
}

/*
0 0
4 5
*/