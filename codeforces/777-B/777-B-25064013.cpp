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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[11],b[11],c[11],d[11];

int main()
{
	int n,i,j,k;
	string s,t;

	cin>>n;
	cin>>s>>t;

	for(i=0;i<s.size();i++){
		a[s[i]-'0']++;
		c[s[i]-'0']++;
	}

	for(i=0;i<t.size();i++){
		b[t[i]-'0']++;
		d[t[i]-'0']++;
	}

	int su = 0;
	for(i=0,j=1;i<=9 and j<=9;){
		while(a[i]==0)	i++;
		while(i+1>j){
			j++;
		}
		while(b[j]==0)	j++;
		if(i>9 or j>9)	break;
		int p = min(a[i],b[j]);
		a[i] -= p;
		b[j] -= p;
		su += p;
	}

	int pu = 0,nn = 0;
	
	for(i=0;i<=9;i++){
		int p = min(c[i],d[i]);
		c[i] -= p;
		d[i] -= p;
		nn += p;
	}

	nn = n-nn;

	for(i=0,j=1;i<=9 and j<=9;){
		while(c[i]==0)	i++;
		while(i+1>j){
			j++;
		}
		while(d[j]==0)	j++;
		if(i>9 or j>9)	break;
		int p = min(c[i],d[j]);
		c[i] -= p;
		d[j] -= p;
		pu += p;
	}

	cout<<nn-pu<<"\n"<<su<<endl;
	return 0;
}