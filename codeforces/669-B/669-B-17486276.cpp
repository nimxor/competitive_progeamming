#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second


int main()
{
	int n,i,j,k;
	cin>>n;
	
	ll a[n+1];
	
	string s;
	cin>>s;
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}	
	
	int flag[n+1],f=0,cnt=0;
	
	mset(flag,0);
	
	for(i=0;i<n;)
	{
		cnt++;
		if(s[i]=='>'){
			i+=a[i];
		}
		else{
			i-=a[i];
		}
		
		if(i<0 || i>=n){
			f=1;
			break;
		}
		if(cnt>2*n)
		{
			break;
		}
	}
	
	if(f==1)
		cout<<"FINITE"<<endl;
	else
		cout<<"INFINITE"<<endl;
	
	return 0;
}