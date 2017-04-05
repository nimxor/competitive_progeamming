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

vector<pair<int,int> > vp;
pair<int,int> pp;
queue<pair<int,int> > q;

int main()
{	
	int n,i,j,k;
	int x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y;
		vp.pb(mp(x,y));
	}

	sort(vp.begin(),vp.end());
	reverse(vp.begin(),vp.end());

	q.push(mp(vp[n-1].fi,vp[n-1].se));
	// cout<<vp[n-1].fi<<endl;

	i=n-2;
	int cn=0;
	while(!q.empty()){
		pp=q.front();
		q.pop();
		int xx = pp.fi;
		int yy = pp.se;
		// cout<<xx<<endl;
		while(i>=0){
			pp = vp[i];
			if(xx<=pp.fi && yy>=pp.se){
				cn++;
			}else{
				q.push(pp);
				i--;
				break;
			}
			i--;
		}
	}

	cout<<cn<<endl;
	return 0;
}