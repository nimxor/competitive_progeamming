#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define mod 1000000007

int main()
{
	double d,l,v1,v2;
	cin>>d>>l>>v1>>v2;
	int i,j,k;
	if(d>=l)
	{
		printf("0.000000\n");
	}
	else
	{
		double ans=(l-d)/(v1+v2);
		printf("%0.6lf\n",ans);
	}
	return 0;
}