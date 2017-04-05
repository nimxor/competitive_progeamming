// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/explorers-birthday/description/

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

const int MAXM = 2e5+5;
const int MAXN = 5e1+5;
ll a[MAXM],b[MAXM],c[MAXM];
map<ll,ll> mm;

int main()
{
	int n,i,j,k;
	string s;

	int A=0,D=0;

	cin>>n>>s;

	for(i=0;i<n;i++){
		if(s[i]=='A')	A++;
		else	D++;
	}

	if(A>D){
		cout<<"Anton\n";
	}else if(A<D){
		cout<<"Danik\n";
	}else{
		cout<<"Friendship\n";
	}
   	return 0;
}