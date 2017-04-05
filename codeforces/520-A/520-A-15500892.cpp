#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scs(a) scanf("%s",a)
#define ll long long



int main()
{
	int n,i,j,k;
	string s;
	cin>>n;
	cin>>s;
	int a[26]={0};
	for(i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
			a[s[i]-'a']=1;
		else
		{
			a[s[i]-'A']=1;
		}
	}   
	int f=0;
	for(i=0;i<26;i++)
	{
		if(a[i]==0)
		{
			f=1;
			break;
		}
	}
	
	if(f==1)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}