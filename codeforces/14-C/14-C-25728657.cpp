#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first
#define pi 3.14159265358979323

const int inf = 1e7;
const int MAXM = 2e5+5;
const int MAXN = 3e3+4;
const int n = 4;
int a[n],b[n],c[n],d[n];
map<int,map<int,int> > point;

int main()
{
	int i,j,k;
	int cn1=0,cn2=0;
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		point[a[i]][b[i]]++;
		point[c[i]][d[i]]++;
		if(a[i]==c[i])	cn1++;
		else if(b[i]==d[i])	cn2++;
	}
	if(cn1!=2 or cn2!=2){
		cout<<"NO\n";
		return 0;
	}
	for(i=0;i<n;i++){
		if(point[a[i]][b[i]]!=2 or point[c[i]][d[i]]!=2){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}