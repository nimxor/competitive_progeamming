#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second

int main()
{
    	int n,i,j,k;
    	
    	cin>>n;
    	int a[n],b[n];
    	
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		b[i]=a[i];
    	}
    
    	sort(a,a+n);
    	
    	bool visit[2002];
    	
    	memset(visit,true,sizeof(visit));
    	int c=1,d=0;
    	int x[n];
    		
    	for(i=n-1;i>=0;i--)
    	{
    		d=0;
    		if(visit[a[i]]==true)
    		for(j=0;j<n;j++)
    		{
    			if(a[i]==b[j])
    			{
    				visit[a[i]]=false;
    				x[j]=c;
    				d++;
    			}
    		}
    		c+=d;;
    	}
    
    	for(i=0;i<n;i++)
    		cout<<x[i]<<" ";
    
    	return 0;
}