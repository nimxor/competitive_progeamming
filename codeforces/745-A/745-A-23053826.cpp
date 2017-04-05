#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const int MAXM = 1e6+5;
map<string,int> m;

int main()
{
	string s;
	int i,j,k;
	cin>>s;

	int n=0,cn=0;
	while(n<s.length()+10){
		n++;
		s = s[s.length()-1]+s.substr(0,s.length()-1);
		if(m[s]==0){
			cn++;
		}
		m[s]=1;
		// cout<<s<<endl;
	}
	cout<<cn<<endl;
	return 0;
}