#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define MAXM 1000000001


int main()
{
	int n,h,i,j,k;
	cin>>n>>h;

	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	int cnt=0;

	for(i=0;i<n;i++)
	{
		if(a[i]>h)
			cnt+=2;
		else
			cnt++;
	}	

	cout<<cnt<<endl;

	return 0;
}