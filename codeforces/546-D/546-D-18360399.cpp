#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007

const int MAXM=5e6+1;
 
int sm[MAXM];
bool valid[MAXM];
int pm[MAXM];
int ans[MAXM];
int pmo[MAXM];

void sieve()
{
	mset(sm,0);
	mset(pm,0);
	mset(valid,true);
	valid[0]=false;
	valid[1]=false;
	for(int i=2;i<MAXM;i+=2){
		sm[i]=2;
	}
	for(int i=3;i*i<MAXM;i+=2){
		if(valid[i]){
			sm[i]=i;
			for(int j=i*i;j<MAXM;j+=i){
				if(valid[j]){
					valid[j]=false;
					sm[j]=i;
				}
			}
		}
	}

	for(int i=3;i<MAXM;i+=2){
		if(sm[i]==0)
			sm[i]=i;
	}

	pmo[0]=0;pmo[1]=0;
	ans[0]=0;ans[1]=0;
	for(int i=2;i<MAXM;i++)
	{
		pmo[i]=1+pmo[i/sm[i]];
		ans[i]=ans[i-1]+pmo[i];
	}
}

void solve()
{
	ll t,a,b,i,j,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		ll x=ans[a]-ans[b];
		printf("%lld\n",x);
	}
}
 
int main()
{
	sieve();
	solve();    
    return 0;
}