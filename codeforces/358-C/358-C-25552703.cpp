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
#define pi 3.14159265358979323

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

stack<int> s;
queue<int> q;
deque<int> deq;
int ss,sq,sdeq;
vector<pair<int,int > > v;
vector<pair<int,string> > vp;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		string str="";
		scan(k);
		if(k==0){
			sort(v.rbegin(),v.rend());
			for(int j=0;j<v.size();j++){
				if(j<=2){
					if(j==0){
						vp.pb(mp(v[j].se,"pushStack"));
					}
					if(j==1){
						vp.pb(mp(v[j].se,"pushQueue"));
					}
					if(j==2){
						vp.pb(mp(v[j].se,"pushFront"));
					}
				}else{
					vp.pb(mp(v[j].se,"pushBack"));
				}
			}
			sort(vp.begin(),vp.end());
			for(j=0;j<vp.size();j++){
				cout<<vp[j].se<<"\n";
			}
			cout<<min((int)v.size(),3)<<((int)v.size()==0 ? "\n" : " ");
			int p= min((int)v.size(),3);
			for(j=0;j<p;j++){
				if(j==0){
					cout<<"popStack"<<((int)p==1 ? "\n" : " ");
				}
				if(j==1){
					cout<<"popQueue"<<((int)p==2 ? "\n" : " ");
				}
				if(j==2){
					cout<<"popFront"<<((int)p==3 ? "\n" : " ");
				}
			}
			v.clear();
			vp.clear();
		}else{
			v.push_back(mp(k,i));
		}
	}
	for(i=0;i<v.size();i++){
		cout<<"pushStack\n";
	}	
	return 0;
}