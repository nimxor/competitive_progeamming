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
const int MAXM = 1e2+5;
const int MAXN = 1e6+4;

int a[MAXM],b[MAXM],occ[MAXM],visit[MAXM];

int main()
{
	int n,m,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		scan(a[i]);
	}
	cin>>m;
	for(i=1;i<=m;i++){
		scan(b[i]);
		occ[b[i]]++;
	}

	sort(a+1,a+1+n);
	sort(b+1,b+1+m);

	i=1,j=1;
	int cn=0;

	while(i<=n and j<=m){
		if(a[i]==b[j] or a[i]==b[j]+1 or a[i]==b[j]-1){
			i++;
			j++;
			cn++;
		}else{
			if(a[i]>b[j]){
				j++;
			}else{
				i++;
			}
		}
	}

	cout<<cn<<endl;

	return 0;
}