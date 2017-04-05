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
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a) printf("%d ",a)
#define printl(a) printf("%lld ",a)

const int MAXM = 1e5+5;
vector<pair<int,int> > a;
vector<int> v1,v2;

int main()
{
	int n,i,j,k;
	scan(n);
	for(i=1;i<=n;i++){
		pair<int,int> pp;
		scan(k);
		pp.fi = k;
		pp.se = i;
		a.pb(pp);
	}
	sort(a.begin(),a.end());

	ll su1=0,su2=0;
	for(i=1;i<=n;i++){
		if(su1>=su2){
			su2+=a[i-1].fi;
			v1.pb(a[i-1].se);
		}else{
			su1+=a[i-1].fi;
			v2.pb(a[i-1].se);
		}
	}

	cout<<v1.size()<<endl;
	for(i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	cout<<v2.size()<<endl;
	for(i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";
	}
	return 0;
}