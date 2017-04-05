#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scs(a) scanf("%s",a)
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define scl(a) scanf("%lld",&a)

vector<int>v;
vector<int>v1;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int i;
	
	for(i=s1.length()-1;i>=0;i--)
	{
		if(s1[i]!='z')
		{
			s1[i]+=1;
			break;
		}
		else
			s1[i]='a';	
	}
	
	if(s1>=s2)
		cout<<"No such string\n";
	else
		cout<<s1<<endl;
	return 0;
}