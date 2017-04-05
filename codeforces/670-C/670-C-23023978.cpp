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
	int n,m,i,j,k;
	cin>>n;

	for(i=1;i<=n;i++){
		cin>>a[i];
		mm[a[i]]++;
	}

	cin>>m;

	for(i=1;i<=m;i++){
		cin>>b[i];
	}

	for(i=1;i<=m;i++){
		cin>>c[i];
	}

	ll maxm=-1,maxi=-1,idx;
	for(i=1;i<=m;i++){
		if(mm[b[i]]>=maxm){
			if(maxi<mm[c[i]]){
				maxi = mm[c[i]];
				maxm = mm[b[i]];
				idx = i;
			}else if(mm[b[i]]>maxm){
				maxm = mm[b[i]];
				maxi = mm[c[i]];
				idx = i;
			}
		}
	}

	cout<<idx<<endl;
   	return 0;
}