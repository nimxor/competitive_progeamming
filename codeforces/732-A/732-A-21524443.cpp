#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define print(i,s) cout<<"Case #"<<i<<": "<<s<<endl


int main()
{
	int n,m,i,j,k;
	cin>>n>>k;
	m = n%10;
	i=1;
	int cn=0;
	while(i<11){
		if((m*i)%10==k || ((m*i)%10==0)){
			cn=i;
			break;
		}
		i++;
	}
	if(cn==0)	cout<<10<<endl;
	else
		cout<<cn<<endl;
	return 0;
}