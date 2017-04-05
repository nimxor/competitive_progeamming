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

const ll maxi = 1e17;
const int MAXM = 140000;
const int MAXN = 1e1+5; 
vector<pair<int,int> > v[8];

int main()
{
	int n,i,j,k;
	cin>>n;
	int x,y;
	for(i=0;i<n;i++){
		cin>>x>>y;
		if(y==0 && x>0){
			v[0].pb(mp(x,y));
		}else if(y==0 && x<0){
			v[1].pb(mp(-x,y));
		}else if(x==0 && y>0){
			v[2].pb(mp(x,y));
		}else if(x==0 && y<0){
			v[3].pb(mp(x,-y));
		}else if(x>0 && y>0){
			v[4].pb(mp(x,y));
		}else if(x<0 && y>0){
			v[5].pb(mp(-x,y));
		}else if(x<0 && y<0){
			v[6].pb(mp(-x,-y));
		}else{
			v[7].pb(mp(x,-y));
		}
	}

	for(i=0;i<8;i++){
		sort(v[i].begin(),v[i].end());
	}

	int cn=0;

	for(i=0;i<8;i++){
		for(j=0;j<v[i].size();j++){
			if(i==0){
				cn+=4;
			}else if(i==1){
				cn+=4;
			}else if(i==2){
				cn+=4;
			}else if(i==3){
				cn+=4;
			}else if(i==4){
				cn+=6;
			}else if(i==5){
				cn+=6;
			}else if(i==6){
				cn+=6;
			}else{
				cn+=6;
			}
		}
	}

	cout<<cn<<endl;
	for(i=0;i<8;i++){
		for(j=0;j<v[i].size();j++){
			if(i==0){
				cout<<"1 "<<v[i][j].fi<<" R\n2\n1 "<<v[i][j].fi<<" L\n3\n";
			}else if(i==1){
				cout<<"1 "<<v[i][j].fi<<" L\n2\n1 "<<v[i][j].fi<<" R\n3\n";
			}else if(i==2){
				cout<<"1 "<<v[i][j].se<<" U\n2\n1 "<<v[i][j].se<<" D\n3\n";
			}else if(i==3){
				cout<<"1 "<<v[i][j].se<<" D\n2\n1 "<<v[i][j].se<<" U\n3\n";
			}else if(i==4){
				cout<<"1 "<<v[i][j].fi<<" R\n1 "<<v[i][j].se<<" U\n2\n";
				cout<<"1 "<<v[i][j].fi<<" L\n1 "<<v[i][j].se<<" D\n3\n";
			}else if(i==5){
				cout<<"1 "<<v[i][j].fi<<" L\n1 "<<v[i][j].se<<" U\n2\n";
				cout<<"1 "<<v[i][j].fi<<" R\n1 "<<v[i][j].se<<" D\n3\n";
			}else if(i==6){
				cout<<"1 "<<v[i][j].fi<<" L\n1 "<<v[i][j].se<<" D\n2\n";
				cout<<"1 "<<v[i][j].fi<<" R\n1 "<<v[i][j].se<<" U\n3\n";
			}else{
				cout<<"1 "<<v[i][j].fi<<" R\n1 "<<v[i][j].se<<" D\n2\n";
				cout<<"1 "<<v[i][j].fi<<" L\n1 "<<v[i][j].se<<" U\n3\n";
			}
		}
	}
}