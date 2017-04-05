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

const int MAXM = 5e5+5;
const int MAXN = 5e1+5;
int n,m;
vector<pair<int,ll> > v[MAXM];
ll ans=0;

int main()
{
	int n,i,j,k;
	cin>>n;

	if(n==1){
		cout<<"0 1\n";
		return 0;
	}

	int minm = (n/7)*2;
	int maxm = 2 + ((n-2)/7)*2;

	int x = n%7;
	if(x==6)	minm++;
	int y = (n-2)%7;
	if(y==6)	maxm++;

	cout<<minm<<" "<<maxm<<endl; 
   	return 0;
}