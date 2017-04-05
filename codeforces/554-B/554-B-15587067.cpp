#include <iostream>
#include<bits/stdc++.h>
using namespace std;

map<string,int> m;

int main()
{
	int n,i,j,k;
	cin>>n;
	string s;
	for(i=0;i<n;i++)
	{
		cin>>s;	
		m[s]++;
	}
	
	map<string,int> :: iterator it;
	
	int maxx=0;
	for(it=m.begin();it!=m.end();it++)
	{
		maxx=max(maxx,it->second);
	}
	
	cout<<maxx<<endl;
    
    	return 0;
}