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
#define pi 3.1415926535897932384
#define mod 1000000007

const int MAXM = 1e5+4;

set<pair<int,int> > sp;
multiset<ll> ml;

int main()
{
	int n,i,j,k,x;
	cin>>n;
	ll a[n+1],pre[n+1];
	mset(pre,0);
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)	pre[i]=a[i];
		else	pre[i]=pre[i-1]+a[i];
	}

	sp.insert(mp(n,1));
	ml.insert(pre[n]);

	for(i=1;i<=n;i++){
		cin>>x;
		auto it = (sp.lower_bound(mp(x,0)));
		int r = it->fi;
		int l = it->se;
		sp.erase(it);
		ml.erase(ml.find(pre[r]-pre[l-1]));
		if(l!=x){
			sp.insert(mp(x-1,l));
			ml.insert((pre[x-1]-pre[l-1]));
		}
		if(r!=x){
			sp.insert(mp(r,x+1));
			ml.insert((pre[r]-pre[x]));
		}
		if(ml.empty()){
			cout<<"0\n";
		}else{
			cout<<(*ml.rbegin())<<endl;
		}
	}
	return 0;
}