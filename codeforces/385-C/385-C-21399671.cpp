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
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e7+5;
const int MAXN = 1e1+5; 
const double pi = acos(-1.0);

int a[MAXM];
bool visit[MAXM];
int sm[MAXM];
int res[MAXM];

void solve()
{
	int i,j,k;
	mset(visit,true);
	visit[0]=visit[1]=false;
	for(i=4;i<MAXM;i+=2){
		visit[i]=false;
		sm[i]=2;
	}

	for(i=3;i*i<MAXM;i+=2){
		if(visit[i]){
			sm[i]=i;
			for(j=i*i;j<MAXM;j+=i){
				if(visit[j]){
					visit[j]=false;
					sm[j]=i;
				}
			}
		}
	}

	for(i=1;i<MAXM;i++){
		if(sm[i]==0){
			sm[i]=i;
		}
	}
}

int main()
{
	solve();
	int n,m,i,j,k;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		int p = a[i],c=0;
		while(p!=1){
			if(c!=sm[p])
				res[sm[p]]++;
			c=sm[p];
			p/=sm[p];
		}
	}

	for(i=1;i<MAXM;i++){
		res[i]+=res[i-1];
		// cout<<res[i]<<" ";
	}
	

	scanf("%d",&m);
	int l,r;
	for(i=0;i<m;i++){
		scanf("%d%d",&l,&r);
		if(r>=MAXM){
			r=MAXM-1;
		}
		if(l>=MAXM){
			l=MAXM-1;
		}
		printf("%lld\n",(1ll*(res[r]-res[l-1])));
	}

	return 0;
}