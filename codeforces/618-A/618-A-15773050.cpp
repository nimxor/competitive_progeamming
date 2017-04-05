#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,i,j,k=1;
	cin>>n;
	int a[100010];
	for(i=0;i<100010;i++)
		a[i]=0;
		
	a[0]=1;
	n--;
	
	while(n--)
	{
		a[k++]++;
		
		for(i=k-1;i>=1;i--)
		{
			if(a[i]==a[i-1])
			{
				a[i-1]++;
				a[i]=0;
				k--;
			}
		}
	}	
	
	for(i=0;i<k;i++)
		cout<<a[i]<<" ";
		
	cout<<endl;
	return 0;
}