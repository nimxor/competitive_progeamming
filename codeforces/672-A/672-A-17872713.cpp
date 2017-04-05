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
	int i,j,k;
	cin>>num;
	int cnt1=0;

	vector<int> v1;
		
	for(i=1;i<=1001;i++)
	{
		j=i;
		vector<int> v2;
		while(j!=0)
		{
			k=j%10;
			j=j/10;
			v2.pb(k);
		}
		reverse(v2.begin(),v2.end());
		for(k=0;k<v2.size();k++)
		{
			v1.pb(v2[k]);
		}				
	}
	
	cout<<v1[num-1]<<endl;
	
	return 0;
}