#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

set<double>s;

int main()
{
	int n,i,j,k;
	double m,a,b,x,y;
	cin>>n>>x>>y;
	
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(b-y==0.0)
			s.insert(0);
		else if(a-x==0.0)
			s.insert(111000.976);
		else
		{
			m=(double)(y-b)/(x-a);
			s.insert(m);
		}
	}
	
	
	/*set<>:: iterator it;
	
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<endl;*/
	
	cout<<s.size()<<endl;
	
	s.clear();
	
    	return 0;
}

/*
2 -10000 -10000

9998 9999

9999 10000

*/