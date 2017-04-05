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
	int n,i,j,k,m,p;
	cin>>n>>m>>p;
	
	int b=2*m+1;
	int cnt=0;
	int n1=n;
	while(n!=0)
	{
		int x=31-__builtin_clz(n);
		n=n^(1<<x);
		if(x==0)
			break;
		n+=(1<<(x-1));
		cnt+=(1<<(x-1));	
		//cout<<x<<n<<cnt<<endl;
	}
	cout<<cnt*b<<" "<<p*n1<<endl;
	return 0;
}