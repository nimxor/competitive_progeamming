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

int n;
bool valids(int x)
{
	return (x>0 && x<=n);
}

int main()
{
	int a,c,b,d,i,j,k;
	cin>>n>>a>>b>>c>>d;

	int valid=0;

	for(i=1;i<=n;i++)
	{
		int sum=(a+b+i);
		if(valids(sum-a-c) && valids(sum-c-d) && valids(sum-b-d))
		{
			valid++;
		}
	}

	cout<<(1ll*valid*n)<<endl;

	return 0;
}