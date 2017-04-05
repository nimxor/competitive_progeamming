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
	
	int d,i,j,k,v1,v2,v[1001],t;
	
	cin>>v1>>v2>>t>>d;
	
	v[1]=v1;
	v[t]=v2;
	
	for(i=2;i<=t-1;i++)
	{
		v[i]=min(v1+d*(i-1) , v2+d*(t-i));
	}
	
	ll result=0;
	
	for(i=1;i<=t;i++)
		result+=v[i];
		//cout<<v[i]<<" ";
	cout<<result<<endl;
	return 0;
}