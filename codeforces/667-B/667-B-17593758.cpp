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
	int n,i,j,k;
	
	cin>>n;
	
	ll a[n],maxm=0,sum=0;
	
	for(i=0;i<n;i++){
		cin>>a[i];
		maxm=max(maxm,a[i]);
		sum+=a[i];
	}
	
	sum-=maxm;
	
	if(sum>maxm)
		cout<<sum-maxm+1<<endl;
	else
		cout<<maxm-sum+1<<endl;

	return 0;
}