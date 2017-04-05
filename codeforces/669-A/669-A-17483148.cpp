#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second


int main()
{
	ll n;
	cin>>n;
	
	ll p=n/3;
	ll q=n%3;
	
	ll cnt=0;
	cnt+=p*2;
	
	if(q==1)
		cnt++;
	else if(q==2)
		cnt++;	
		
	cout<<cnt<<endl;	
	return 0;
}