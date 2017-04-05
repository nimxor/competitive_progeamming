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
	ll a[3];
	int i=0;
	for(i=0;i<3;i++){
		cin>>a[i];
	}

	sort(a,a+3);
	ll maxm=a[2];

	ll cn=0;

	for(i=0;i<3;i++){
		if(maxm==a[i] || maxm==a[i]+1)	continue;
		cn+=(maxm-a[i]-1);
	}

	cout<<cn<<endl;
	return 0;
}