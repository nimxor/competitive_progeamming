#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 1025;

int a[MAXM],freq[MAXM],freq1[MAXM];

int main()
{
	int n,i,j,k,x;
	scan(n);scan(k);scan(x);
	for(i=1;i<=n;i++){
		scan(a[i]);
		freq[a[i]]++;
	}
	int pre=0;
	for(i=1;i<=k;i++){
		pre=0;
		for(j=0;j<MAXN;j++){
			freq1[j]=freq[j];

		}
		for(j=0;j<MAXN;j++){
			if(!freq[j])	continue;
			int p = freq[j];
			if(p&1){
				int q = p/2;
				if(pre==0){
					freq1[j]-=p-q;
					freq1[j^x]+=p-q;
					pre=1;
				}else{
					freq1[j]-=q;
					freq1[j^x]+=q;
					pre=0;
				}
			}else{
				int q = p/2;
				if(pre==0){
					freq1[j]-=q;
					freq1[j^x]+=q;
					pre=0;
				}else{
					freq1[j]-=q;
					freq1[j^x]+=q;
					pre=1;
				}
			}
		}
		for(j=0;j<MAXN;j++){
			freq[j]=freq1[j];
		}
	}

	int minm=1e6,maxm=0;
	for(i=0;i<=1024;i++){
		if(freq[i]){
			minm=min(minm,i);
			maxm=max(maxm,i);
		}
	}

	printf("%d %d\n",maxm,minm);
	return 0;
}