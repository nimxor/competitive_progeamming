#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define scs(a) scanf("%s",a)
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define scl(a) scanf("%lld",&a)
#define mod 1000000007
#define vpii  vector<pair<pair<ll,ll>,int> > 
#define pii pair<pair<ll,ll>, int>      
vpii vp;
pair<ll,ll> p1[2];

bool cmp(const pii &l,const pii &r)
{
	return (r.fi.se > l.fi.se) || ((r.fi.se==l.fi.se) && (r.fi.fi>l.fi.fi));
}

bool check(int i)
{
	if(1ll*(p1[1].se-p1[0].se)*(p1[1].fi-vp[i].fi.fi) == 1ll*(p1[1].se-vp[i].fi.se)*(p1[1].fi-p1[0].fi))
		return false;
	else
		return true;
		
}


int main()
{
	int n,i,j,k;

	cin>>n;
	ll x,y;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		/*cin>>vp[i].fi.fi>>vp[i].fi.se;
		vp[i].se=i+1;*/
		vp.pb(mp(mp(x,y),i+1));
	}
	
	sort(vp.begin(),vp.end(),cmp);
	
	/*for(i=0;i<vp.size();i++)
	{
		cout<<vp[i].fi.fi<<" "<<vp[i].fi.se<<" "<<vp[i].se<<endl;	
	}*/
	
	p1[0].fi=vp[0].fi.fi;
	p1[0].se=vp[0].fi.se;
	p1[1].fi=vp[1].fi.fi;
	p1[1].se=vp[1].fi.se;
	
	ll pos;
	
	for(i=2;i<vp.size();i++)
	{
		if(check(i)==true)
		{
			pos=vp[i].se;
			break;	
		}		
	}
	
	cout<<vp[0].se<<" "<<vp[1].se<<" "<<pos<<endl;
	
	return 0;
}