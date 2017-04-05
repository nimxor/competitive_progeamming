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
	
	ll n,i,j,k,y;
	cin>>n;
	
	if(n==1)
		cout<<1<<endl;
	else if(n==2)
		cout<<1<<endl;
	else if(n==3)
		cout<<2<<endl;
	else
	{
	
		double p=(double)n;
	
		double squrt=sqrt((double)1.0+8*p);
	
		squrt=floor((-1.0+squrt)/2.0);
		
		if(p==(double)(((squrt)*(squrt+1))/2))
			y=(ll)squrt;
		else
		{
			double x=p-(double)(((squrt)*(squrt+1))/2);
		
			y=(ll)x;
		}
		
		cout<<y<<endl;
	}
	
	return 0;
}