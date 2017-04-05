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

const ll maxi = 1e17;
const int MAXM = 2e3+5;
const int MAXN = 5e5+5; 

set<string> ss;
int cn[26];

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;

	string s[n];

	for(i=0;i<n;i++){
		cin>>s[i];
	}

	ll sum=1;

	for(i=0;i<m;i++){
		for(j=0;j<26;j++)	cn[j]=0;
		for(j=0;j<n;j++){
			cn[s[j][i]-'A']++;
		}
		int t=0;
		for(j=0;j<26;j++){
			if(cn[j])	t++;
		}
		sum=(sum*t)%mod;
	}

	cout<<sum<<endl;
	return 0;
}