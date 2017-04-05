#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000009
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)
#define print(a) printf("%d\n",a)
#define printl(a) printf("%lld\n",a)

const int MAXM = 1e5+5;
bool visit[MAXM];
int a[MAXM];
vector<pair<int,int> > vp;
vector<string> v;

bool check(string s)
{
	int p=0,i,q=0;
	for(i=0;i<s.length();i++){
		if(s[i]=='x')	p++;
		if(s[i]=='.')	q++;
	}
	if(p==2 && q==1)	return true;
	else	return false;
}

int main()
{
	// freopen("inputf.in","r",stdin);freopen("outputf.out","w",stdout);
	int n=4,i,j,k;
	string s[4];
	for(i=0;i<n;i++){
		cin>>s[i];
	}

	int f=0,tt=0;

	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			v.pb(s[i].substr(j,3));
		}
	}

	string ss="";
	ss+=s[0][0];
	ss+=s[1][0];
	ss+=s[2][0];
	v.pb(ss);
	ss="";
	ss+=s[1][0];
	ss+=s[2][0];
	ss+=s[3][0];
	v.pb(ss);
	ss="";
	ss+=s[0][1];
	ss+=s[1][1];
	ss+=s[2][1];
	v.pb(ss);
	ss="";
	ss+=s[1][1];
	ss+=s[2][1];
	ss+=s[3][1];
	v.pb(ss);
	ss="";
	ss+=s[0][2];
	ss+=s[1][2];
	ss+=s[2][2];
	v.pb(ss);
	ss="";
	ss+=s[1][2];
	ss+=s[2][2];
	ss+=s[3][2];
	v.pb(ss);
	ss="";
	ss+=s[0][3];
	ss+=s[1][3];
	ss+=s[2][3];
	v.pb(ss);
	ss="";
	ss+=s[1][3];
	ss+=s[2][3];
	ss+=s[3][3];
	v.pb(ss);
	ss="";
	ss+=s[0][2];
	ss+=s[1][1];
	ss+=s[2][0];
	v.pb(ss);
	ss="";
	ss+=s[0][3];
	ss+=s[1][2];
	ss+=s[2][1];
	v.pb(ss);
	ss="";
	ss+=s[1][2];
	ss+=s[2][1];
	ss+=s[3][0];
	v.pb(ss);
	ss="";
	ss+=s[1][3];
	ss+=s[2][2];
	ss+=s[3][1];
	// cout<<ss<<endl;
	v.pb(ss);
	ss="";
	ss+=s[1][3];
	ss+=s[2][3];
	ss+=s[3][3];
	v.pb(ss);
	ss="";
	ss+=s[0][1];
	ss+=s[1][2];
	ss+=s[2][3];
	v.pb(ss);
	ss="";
	ss+=s[0][0];
	ss+=s[1][1];
	ss+=s[2][2];
	v.pb(ss);
	ss="";
	ss+=s[1][1];
	ss+=s[2][2];
	ss+=s[3][3];
	v.pb(ss);
	ss="";
	ss+=s[1][0];
	ss+=s[2][1];
	ss+=s[3][2];
	v.pb(ss);

	for(i=0;i<v.size();i++){
		// cout<<v[i]<<endl;
		if(check(v[i])){
			// cout<<i<<endl;
			// cout<<v[i]<<endl;
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}