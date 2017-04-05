#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i,j,k,cnt1=0,cnt2=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='0')
			cnt1++;
		else
			cnt2++;
			
	}
	
	cout<<abs(cnt1-cnt2)<<endl;
	return 0;
}