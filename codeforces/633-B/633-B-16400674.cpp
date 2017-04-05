#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int n;

int solve(int num)
{
	int res=0,x=1;
	while(x<=num)
	{
		x*=5;
		res+=num/x;
	}
	return res;
}

int main()
{
	int i,j,k;
	cin>>n;
	
	int low=1;
	int high=1e7;
	int res=-1;

	while(low<=high)
	{
		//printf("hello\n");
		int mid=low + (high-low)/2;
		int x=solve(mid);
		if(x==n)
		{
			res=mid;
			high=mid-1;
		}
		else if(x<n)
		{
			low=mid+1;
		}
		else
			high=mid-1;
	}
	
	if(res==-1){
		cout<<0<<endl;
		return 0;
	}
	cout<<5<<endl;
	
	for(i=0;i<5;i++)
		cout<<res+i<<endl;
	
	return 0;
	
}