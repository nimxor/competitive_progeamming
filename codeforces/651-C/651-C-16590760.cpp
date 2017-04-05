#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mod 1000000007
#define pb push_back
#define mp make_pair

map<int , int> mx,my;
map<pair<int,int>,int> pa;

int main()
{
    	
    	int t,i,j,k;
    	int x,y;
    	
   	cin>>t;
   	
   	ll cnt=0;
   	
   	for(i=0;i<t;i++)
   	{
   		cin>>x>>y;
   		mx[x]++;
   		my[y]++;
   		pa[mp(x,y)]++;
   	} 	
   	
   	
   	map<int,int>:: iterator it;
   	
   	for(it=mx.begin();it!=mx.end();it++)
   	{
   	    cnt+=(1ll*(it->se)*(it->se-1))/2;
   	}
   	
   	
   	for(it=my.begin();it!=my.end();it++)
   	{
   	    cnt+=(1ll*(it->se)*(it->se-1))/2;
   	}
   	
   	map<pair<int,int>,int> :: iterator it1;
   	
   	for(it1=pa.begin();it1!=pa.end();it1++)
   	{
   	    cnt-=(1ll*(it1->se)*(it1->se-1))/2;
   	}
   		
   	cout<<cnt<<endl;
   
    	return 0;
}