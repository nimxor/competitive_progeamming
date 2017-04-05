#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scs(a) scanf("%s",a)
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define scl(a) scanf("%lld",&a)

int main()
{
	ll n,x,i,j,k;
	cin>>n>>x;
	int f=0,p=0;
	ll cnt=0;
	
	for(i=1;i*i<=x;i++)
	{
		if(x%i==0)
		{
			if(x/i==i && i<=n)
			{
				p++;
				continue;
			}
			if(x/i<=n && i<=n)
				cnt++;
		}
	}
	
	cout<<2*cnt+p<<endl;
	
	return 0;
}
/*
3
2
1 2
2
1 1
3
1 2 3
*/