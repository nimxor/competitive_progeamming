#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int i,j,k;
	int n,m;
	cin>>n>>m;
	
	ll x;
	
	ll minx=1000000100,maxx=0;
	
	for(i=0;i<n;i++)
	{
		minx=1000000100;
		for(j=0;j<m;j++)
		{
			scanf("%lld",&x);
			minx=min(x,minx);
		}
		maxx=max(minx,maxx);
	}
	
	printf("%lld",maxx);
	return 0;
}

/*
3 4
4 1 3 5
2 2 2 2
5 4 5 1
*/