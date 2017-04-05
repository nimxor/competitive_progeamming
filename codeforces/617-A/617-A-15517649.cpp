#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scs(a) scanf("%s",a)
#define ll long long
#define fi first
#define se second
#define mk make_pair
#define pb push_back



int main()
{
	ll x;
	cin>>x;
	ll cnt=0;
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		cnt+=x/i;
		x=x%i;
	}
	cout<<cnt<<endl;
	return 0;
}/*fidan khalilova*/