#include<bits/stdc++.h>
#include<stdint.h>
using namespace std;
#define ll long long
#define ull int64_t
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
 
int cnt=0,num,p; 

int main()
{
	int i,j,k,cnt1=0;
	cin>>num;
	
	string s;
	cin>>s;
	
	int a[26]={0};
	
	for(i=0;i<s.length();i++)
	{
		a[s[i]-'a']++;
	}
	
	for(i=0;i<26;i++)
	{
		if(!a[i])
			cnt++;
		else if(a[i]>1)
			cnt1+=a[i]-1;
	}
	
	if(cnt1>cnt)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<cnt1<<endl;
	}
	
	return 0;
}