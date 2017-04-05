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
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[MAXM],b[MAXM];
vector<int> v1,v2,v;

void print(vector<int> vv)
{
	for(int i=0;i<vv.size();i++){
		cout<<vv[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n,l,i,j,k;
	scan(n);scan(l);

	for(i=1;i<=n;i++){
		scan(a[i]);
	}

	for(i=1;i<=n;i++){
		scan(b[i]);
	}

	if(n>=2)
	for(i=2;i<=n;i++){
		v1.pb(a[i]-a[i-1]);
	}

	if(n>=2)
	for(i=2;i<=n;i++){
		v2.pb(b[i]-b[i-1]);
	}

	v1.pb(l-a[n]+a[1]);
	v2.pb(l-b[n]+b[1]);

	for(i=0;i<v1.size();i++){
		v.pb(v1[i]);
	}
	for(i=0;i<v1.size();i++){
		v.pb(v1[i]);
	}

	// print(v);
	// print(v1);
	// print(v2);

	int ff=0;
	for(i=0;i<v.size();i++){
		int f=1;
		for(j=0,k=i;j<v2.size();j++,k++){
			if(v[k]!=v2[j]){
				f=0;
				break;
			}
		}
		// cout<<i<<" "<<j<<endl;
		if(f){
			ff=1;
		}
	}


	// for(int i=0;i<v1.size();i++){
	// 	cout<<v1[i]<<" ";
	// }

	// cout<<endl;

	// for(int i=0;i<v2.size();i++){
	// 	cout<<v2[i]<<" ";
	// }

	// cout<<endl;

	if(ff){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

    return 0;
}