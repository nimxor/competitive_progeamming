#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define print(i,s) cout<<"Case #"<<i<<": "<<s<<endl


int main()
{
	int n,m,i,j,k;
	cin>>n>>k;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}

	for(i=1;i<n;i++){
		if((a[i]+a[i-1])<k){
			a[i]=k-a[i-1];
		}	
	}

	ll su=0;
	for(i=0;i<n;i++){
		su+=(a[i]-b[i]);
	}

	cout<<su<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}