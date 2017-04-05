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
const int MAXN = 2e6+1;

int a[MAXM];
ll dp[MAXM],sum[MAXM];

priority_queue<int> Q;
vector<vector<int> > v;

int main()
{
	int n,i,j,k;
	scan(n);

	for(i=1;i<=n;i++){
		scan(a[i]);
	}

	int m = n;

	for(i=1;i<=n;i++){
		Q.push(a[i]);
		if(a[i]==m){
			while(!Q.empty()){
				int to = Q.top();
				if(to==m){
					printf("%d ",to);
					m--;
					Q.pop();
					if(Q.empty()){
						printf("\n");
					}
				}else{
					printf("\n");
					break;
				}
			}
		}else{
			printf("\n");
		}
	}

	return 0;
}