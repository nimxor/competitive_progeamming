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

int main()
{
	int a,b,i,j,k,cnt1=0,cnt2=0;
	cin>>a>>b;
	
	if(a<=b)
	{
		cnt1+=a;
		cnt2=b-cnt1;
		cout<<cnt1<<" "<<cnt2/2;
	}
	else
	{
		cnt1+=b;
		cnt2=a-cnt1;
		cout<<cnt1<<" "<<cnt2/2;
	}
	
	
	
	return 0;
}
/*
3
2
1 2
2
1 1
3
1 2 3
*/