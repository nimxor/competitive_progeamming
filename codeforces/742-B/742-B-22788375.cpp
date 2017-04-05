// prime factors in O(n^1/3)
// prime factors of a number of power(10^6) can ony be <=100 

#include<bits/stdc++.h>
using namespace std;

#define fi                    first
#define se                    second
#define ll                    long long
#define all(a)                a.begin(),a.end()
#define rall(a)               a.rbegin(),a.rend()  
#define mod                  1000000007
#define mp                    make_pair
#define pb                    push_back
#define mset(m,v)             memset(m,v,sizeof(m))

const int MAXM = 1e5+3;
int a[MAXM];

int main()
{
	int i,j,k,n;
	cin>>n>>k;

	for(i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	ll su=0;
	for(i=0;i<n;i++){
		int p = k^a[i];
		int x = lower_bound(a,a+n,p)-a;
		if(a[x]!=p || x>=n)	continue;
		int y = lower_bound(a,a+n,p+1)-a;
		int diff = y-x;
		su+=diff;
		if(p==a[i])
			su--;
	}

	cout<<su/2<<endl;
	return 0;
}