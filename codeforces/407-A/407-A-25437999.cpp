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
const int MAXM = 1e3;
const int MAXN = 1e6+4;

int main()
{
	int a,b,i,j,k;
	cin>>a>>b;
	double q = (double)sqrt((double)a*(double)a+(double)b*(double)b);
	for(i=1;i<=a;i++){
		double y = sqrt((double)a*a-(double)i*i);
		if(y!=floor(y))	continue;
		if(y==0.0)	continue;
		for(j=1;j<=b;j++){
		    double pp1 = i;
		    double pp2 = j;
			double x = sqrt((double)b*b-(double)j*j);
			double p = (double)sqrt(((double)(i+x)*(double)(i+x))+((double)(y-j)*(double)(y-j)));
			if(x!=floor(x))	continue;
			if(x==0)	continue;
			if(p!=q)	continue;
			cout<<"YES\n";
			cout<<"0 0\n";
			if(y==j){
				swap(pp1,y);
				swap(x,pp2);
			}
			cout<<pp1<<" "<<y<<endl;
			cout<<-x<<" "<<pp2<<endl;
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}