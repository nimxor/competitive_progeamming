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

const int MAXM = 1e5+5;
const int MAXN = 5e1+5;
ll a[MAXM];

int main()
{
	int n,k,i,j;
	cin>>n>>k;

	for(i=1;i<=n;i++){
		cin>>a[i];
	}

	ll p = (-1+sqrt(1+8LL*k))/2;

	ll x = ((1LL*p)*(p+1))/2;

	k -= x;

	if(k==0)	cout<<a[p]<<endl;
	else	cout<<a[k]<<endl;
   	return 0;
}