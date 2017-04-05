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
const int MAXM = 1e4+5;
const int MAXN = 1e6+4;

int main()
{
	int x,y,z,a,b,c,p,q,r,i,j,k;
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	cin>>p>>q>>r;
	int minm=1e8;
	for(i=x;i<1000;i++){
		for(j=y;j<201;j++){
			for(k=z;k<201;k++){
				int p1 = max(0,j-c);
				if(p1==0)	continue;
				int p2 = max(0,b-k);
				if(p2==0){
					minm=min(minm,(i-x)*p+(j-y)*q+(k-z)*r);
					continue;
				}
				int t1 = a/p1;
				int t2 = i/p2;
				if(a%p1!=0)	t1++;
				if(i%p2!=0)	t2++;
				if(t2>t1){
					minm=min(minm,(i-x)*p+(j-y)*q+(k-z)*r);
				}
			}
		}
	}
	cout<<minm<<endl;
	return 0;
}