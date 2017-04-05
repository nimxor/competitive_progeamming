#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mod 1000000007



int main()
{
    	
    	int i,j,k,n,m;
    	cin>>n>>m;
    	
    	int cnt=0;
    	
    	while(1)
    	{
    		if(n==0 || m==0)
    			break;
    		if(n==1 && m==1)
    			break;
    		if(n>m)
    		{
    			n-=2;
    			m++;
    			cnt++;
    		}
    		else
    		{
    			m-=2;
    			n++;
    			cnt++;
    		}
    	}
    	
    	cout<<cnt<<endl;
    	return 0;
}