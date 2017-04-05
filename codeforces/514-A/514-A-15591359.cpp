#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	string s;
	cin>>s;
	int i,f=1;
	string a="";
	for(i=0;i<s.length();i++)
	{
		if(s[0]=='9' && f)
		{
			f=0;
			a=a+s[i];
			continue;
		}
		if(s[i]>='5')
		{
		        int x=s[i]-'0'; 
			a=a+char('0'+9-x);
		}
		else
		{
			a=a+s[i];
		}
	}
	
	/*string str="";
	
	for(i=0;i<a.length();i++)
	{
		if(a[i]=='0' && f)
			continue;
		else 
		{
			str=str+a[i];
			f=0;
		}
	}*/
	cout<<a<<endl;
    	return 0;
}