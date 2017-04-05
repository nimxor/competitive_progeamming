#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define se second


int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	int maxm=0,minm=100100,posmax,posmin;
	for(i=0;i<n;i++){
		if(maxm<a[i])
		{
			maxm=a[i];
			posmax=i;
		}
		if(a[i]<minm){
			minm=a[i];
			posmin=i;
		}
	}

	int p=0;
	p=max(p,posmin);
	//cout<<p<<endl;
	p=max(p,n-posmin-1);
	//cout<<p<<endl;
	p=max(p,posmax);
	//cout<<p<<endl;
	p=max(p,n-posmax-1);

	cout<<p<<endl;
	return 0;
}