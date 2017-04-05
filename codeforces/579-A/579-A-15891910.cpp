#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back


int main()
{
	
	ll x;
	ll cnt=0;
	cin>>x;
	while(x!=0)
	{
		if(x&1)
			cnt++;
		x/=2;	
	}
	
	cout<<cnt<<endl;
	
	return 0;
}