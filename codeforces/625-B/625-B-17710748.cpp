#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384


int main()
{
	string s,p;
	int i,j,k;
	cin>>s>>p;
	int n=p.length();
	int cnt=0;

	for(i=0;i<s.length();i++)
	{
		if(s.substr(i,n)==p){
			cnt++;
			i+=n-1;
		}
	}
	cout<<cnt<<endl;
	return 0;
}