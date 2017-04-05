#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)

const int MAXM = 1e5+5;
ll a[MAXM];

int main()
{
	int n,k,i,j;
	cin>>n>>k;

	if(k==0){
		if(n==1)	cout<<1<<endl;
		else	cout<<-1<<endl;
	}else if(n==1){	cout<<-1<<endl;
	}else if(n/2 > k)	cout<<-1<<endl;
	else{
		int p = k - (n-2)/2;
		int x = (n-2);
		cout<<p<<" "<<2*p<<" ";
		for(i=2*p+1;i<=x+2*p;i++){
			cout<<i<<" ";
		}
	}
	return 0;
}