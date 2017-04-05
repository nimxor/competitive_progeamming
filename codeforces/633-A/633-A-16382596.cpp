#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back


int main()
{
	int n,i,j,k,m,c;
	cin>>n>>m>>c;
	int x=c,f=0;
	if(x%m==0 || x%n==0)
	{
		cout<<"Yes"<<endl;
		return 0;
	}
	
	while(1)
	{
		if(x>=n)
			x-=n;
		else if(x-n<0)
			break;
		if(x%m==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No\n";
	return 0;
}

/*
73 6 431
*/