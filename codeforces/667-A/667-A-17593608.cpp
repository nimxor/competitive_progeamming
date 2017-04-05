#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384

int main()
{
	
	double d,h,v,e;
	
	cin>>d>>h>>v>>e;
	
	double r=d/2.0;
	
	double p=(pi*r*r*h)/(v-(pi*r*r*e));
	
	if(p<0)
		cout<<"NO"<<endl;
	else
		cout<<"YES\n"<<p<<endl;

	return 0;
}