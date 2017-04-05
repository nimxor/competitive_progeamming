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
#define scan(a) scanf("%d",&a)

const int MAXM = 1e5+5;
pair<int,int> p[4];

int main()
{
	int n,i,j,k,m;
	cin>>n>>m;

	string s[n];

	for(i=0;i<n;i++){
		cin>>s[i];
	}

	int f=0;

	for(i=0;i<4;i++){
		p[i].fi=p[i].se=-1;
	}

	int cp=0;

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='X')
				cp++;
			else	
				continue;

			if(s[i][j]=='X' && f==0){
				f=1;
				p[0].fi = i; p[0].se = j;
			}
			if(s[i][j]=='X' && f<=1 || p[1].fi==i){
				f=2;
				if(p[1].fi==-1){
					p[1].fi = i;p[1].se=j;
				}else{
					if(p[1].fi==i && p[1].se<j){
						p[1].se = j;
					}
				}
			}
			if(s[i][j]=='X' && f<=2 || p[2].fi<i){
				f=3;
				if(p[2].fi==-1){
					p[2].fi = i;p[2].se=j;
				}else{
					if(p[2].fi<i){
						p[2].se = j;
						p[2].fi = i;
					}
				}
			}
			if(s[i][j]=='X' && f<=3 || p[3].fi<=i || p[3].se<=j){
				f=4;
				if(p[3].fi==-1){
					p[3].fi = i;p[3].se=j;
				}else{
					if(p[3].fi<=i || p[3].se<j){
						p[3].se = j;
						p[3].fi = i;
					}
				}
			}
		}
	}

	// for(i=0;i<4;i++){
	// 	cout<<p[i].fi<<" "<<p[i].se<<endl;
	// }


	if(p[0].fi!=p[1].fi || p[1].se!=p[3].se || p[3].fi!=p[2].fi || p[2].se!=p[0].se){
		cout<<"NO\n";
		return 0;
	}

	int cn=0,ff=0;

	for(i=p[0].fi;i<=p[2].fi;i++){
		for(j=p[0].se;j<=p[1].se;j++){
			if(s[i][j]=='X')	cn++;
			else	ff=1;
		}
	}

	if(cp!=cn || ff){
		cout<<"NO\n";
		return 0;
	}

	cout<<"YES\n";

	return 0;
}