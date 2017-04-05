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
const int MAXM = 2e5+5;
const int MAXN = 2e6+4;

string s,t;
int a[MAXM];
bool visit[MAXM];

bool solve(int n)
{
	mset(visit,false);
	for(int i=1;i<=n;i++){
		visit[a[i]-1]=true;
	}
	int j = 0;
	for(int i=0;i<s.size();i++){
		if(visit[i])	continue;
		if(s[i]==t[j]){
			j++;
			if(j==t.size())	return true;
		}
	}
	return false;
}

int main()
{
	int n,i,j,k;
	cin>>s>>t;
	n = s.length();
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	int lo = 1,hi = n,Ans=0;
	while(lo<=hi){
		int mid = lo+(hi-lo+1)/2;
		if(solve(mid)){
			lo = mid+1;	
			Ans = mid;
		}else{
			hi = mid-1;
		}
	}	
	cout<<Ans<<endl;
	return 0;
}