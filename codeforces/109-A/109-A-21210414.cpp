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
	int n,i,j,k;
	cin>>n;
	int p,q;
	for(i=0;i<=n;i++){
		if(i*4>n){
			cout<<-1<<endl;
			return 0;
		}
		int x = n-i*4;
		q=i;
		int rem = x%7;
		if(rem==0){
			p = x/7;
			break;
		}
	}

	for(i=0;i<q;i++)	cout<<4;
	for(j=0;j<p;j++)	cout<<7;
	return 0;
}