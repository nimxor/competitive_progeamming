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

const int inf = 1e7;
const int MAXM = 1e3+5;
const int MAXN = 3e3+4;

int a[26];
vector<pair<int,char> > v;
bool visit[MAXM];
int sm[MAXM];
char ans[MAXM];


int main()
{
	for(int i=1;i<MAXM;i++){
		ans[i]='+';
	}
	mset(visit,true);
	visit[0]=visit[1]=false;
	for(int i=4;i<MAXM;i+=2)	visit[i]=false,sm[i]=2;
	for(int i=3;i<MAXM;i+=2){
		if(visit[i]){
			for(int j=2*i;j<MAXM;j+=i){
				visit[j]=false;
				sm[j]=i;
			}
		}
	}
	string s;
	cin>>s;
	int n = s.length(),i,j;
	if(n<=2){
		cout<<"YES\n";
		cout<<s<<endl;
		return 0;
	}
	for(i=0;i<n;i++){
		a[s[i]-'a']++;
	}
	for(i=0;i<26;i++){
		if(a[i])
		v.pb(mp(a[i],(char)(i+'a')));
	}
	sort(v.begin(),v.end());
	int k=v.size()-1;
	for(i=2;i<=n;i++){
		if(!visit[i])	continue;
		if(i==2){
			ans[2]=v[k].se;
			v[k].fi--;
			// cout<<v[k].se<<" "<<v[k].fi<<endl;	
		}
		else if(i*2<=n and i!=2){
			ans[i]=ans[2];
			v[k].fi--;
		}else{
			if(v[k].fi<0){
				cout<<"NO\n";
				return 0;
			}else if(v[k].fi==0){
				k--;
			}
			ans[i]=v[k].se;
			v[k].fi--;
		}		
		for(j=i;j<=n;j+=i){
			if(ans[j]!='+')	continue;	
			ans[j]=ans[i];
			v[k].fi--;
		}
	}
	char ch;
	for(i=0;i<v.size();i++){
		if(v[i].fi>0){
			ch=v[i].se;
			v[i].fi--;
			break;
		}
	}
	// for(i=0;i<v.size();i++){
	// 	cout<<v[i].fi<<" "<<v[i].se<<endl;
	// }
	ans[1]=ch;
	// for(i=1;i<=n;i++){
	// 	cout<<ans[i]<<" ";
	// }
	// cout<<endl;
	for(i=0;i<v.size();i++){
		// cout<<v[i].fi<<" ";
		if(v[i].fi!=0){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	for(i=1;i<=n;i++){
		cout<<ans[i];
	}
	return 0;
}