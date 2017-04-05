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
 
const int MAXM = 1e3+5;
 
int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++){
		cin>>a[i];
	}

	int gcd=a[0];

	for(i=1;i<n;i++){
		gcd=__gcd(a[i],gcd);
	}

	cout<<(1LL*n*gcd)<<endl;
	return 0;
}