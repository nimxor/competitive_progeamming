#include<bits/stdc++.h>
#include<time.h>
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

const int MAXM = 1e6+5;
ll a[MAXM];
vector<int> v;
pair<double,double> p[3];
vector<pair<int,int> >vp;

bool ispal(int x,int y)
{
	double x1 = (x+p[0].fi)/2.0;
	double y1 = (y+p[0].se)/2.0;
	double x2 = (p[1].fi+p[2].fi)/2.0;
	double y2 = (p[1].se+p[2].se)/2.0;

	if(x1==x2 && y1==y2)	return true;

	x1 = (x+p[1].fi)/2.0;
	y1 = (y+p[1].se)/2.0;
	x2 = (p[0].fi+p[2].fi)/2.0;
	y2 = (p[0].se+p[2].se)/2.0;

	if(x1==x2 && y1==y2)	return true;

	x1 = (x+p[2].fi)/2.0;
	y1 = (y+p[2].se)/2.0;
	x2 = (p[0].fi+p[1].fi)/2.0;
	y2 = (p[0].se+p[1].se)/2.0;

	if(x1==x2 && y1==y2)
		return true;

	return false;
}

void check()
{
	int i,j;
	for(i=-3500;i<=3500;i++){
		for(j=-3500;j<=3500;j++){
			if(ispal(i,j)){
				vp.pb(mp(i,j));
			}
		}
	}
	// ispal(1,1);
}

int main()
{
	int i,j,k,n,x,y;
	n=3;
	for(i=0;i<n;i++){
		cin>>x>>y;
		p[i].fi = x;
		p[i].se = y;
	}

	check();
	cout<<vp.size()<<endl;
	for(i=0;i<vp.size();i++){
		cout<<vp[i].fi<<" "<<vp[i].se<<endl;
	}	
	return 0;
}