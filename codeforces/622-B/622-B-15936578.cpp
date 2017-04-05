#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back


int main()
{
	string s;
	int m,hh=0,mm=0;
	
	int i,j,k,p=0,q=0;
	
	cin>>s>>m;
	
	for(i=0;i<=1;i++)
		hh=hh*10+s[i]-'0';
	
	for(j=3;j<=4;j++)
		mm=mm*10+s[j]-'0';
		
	int x=mm+m;
	
	//cout<<hh<<" "<<mm<<endl;
	
	p=x%60;
	q=x/60;
	//cout<<p<<" "<<q<<endl;
	
	
	
	int o=q+hh;
	
	if(o>=24)
		o%=24;
	
	if(o==0)
		cout<<"00:";
	else if(o<10)
		cout<<"0"<<o<<":";
	else
		cout<<o<<":";
		
	if(p==0)
		cout<<"00"<<endl;
	else if(p<10)
		cout<<"0"<<p<<endl;
	else
		cout<<p<<endl;
		
	
	return 0;
}