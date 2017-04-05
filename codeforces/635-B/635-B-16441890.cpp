#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
	int t,n;
	
	cin>>n;
	
	int a[n],b[n],i,j,pi,pj;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			pi=i;
	}
		
	for(i=0;i<n;i++){
		cin>>b[i];
		if(b[i]==1)
			pj=i;
	}
	
	vector<int> A,B;
	
	for(i=pi;i<n;i++)
	{
		if(a[i])
			A.pb(a[i]);
	}
	
	for(i=0;i<pi;i++)
	{
		if(a[i])
			A.pb(a[i]);
	}
	
	for(i=pj;i<n;i++)
	{
		if(b[i])
			B.pb(b[i]);	
	}
	
	for(i=0;i<pj;i++)
	{
		if(b[i])
			B.pb(b[i]);
	}
	
	if(A==B)
		puts("YES");
	else
		puts("NO");
	return 0;
}