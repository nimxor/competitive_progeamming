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

const int MAXM = 3e6+5;
ll a[MAXM];
stack<int> st;
vector<string> v;
vector<int> vv;
vector<string> vd[MAXM];

int convert(string sp)
{
	int pp=0;
	for(int i=0;i<sp.size();i++){
		pp = pp*10+(sp[i]-'0');
	}
	return pp;
}

int maxm=0,pos=0;

void dfs(int level)
{
	maxm=max(maxm,level);
	vd[level].pb(v[pos]);
	int tt = vv[pos++];
	for(int i=0;i<tt;i++)
		dfs(level+1);
}

int main()
{
	int i,j,k;
	string s;

	cin>>s;

	int n = s.length();
	string ss="";
	int p=0;
	for(i=0;i<n;i++){
		if(s[i]==','){
			if(p&1)	vv.pb(convert(ss));
			else	v.pb(ss);	
			p++;
			ss="";
		}else{
			ss+=s[i];
		}
	}

	vv.pb(convert(ss));

	// for(i=0;i<vv.size();i++){cout<<v[i]<<endl;}

	// st.push(INT_MAX);
	// i=0;
	// int maxm=0;
	// while(i<v.size()){
	// 	vd[st.size()].pb(v[i]);
	// 	maxm=max((int)st.size(),maxm);
	// 	st.push(vv[i]);
	// 	while(st.top()==0){
	// 		st.pop();
	// 		st.top()--;
	// 	}
	// 	i++;
	// }

	while(pos<v.size())
		dfs(1);

	cout<<maxm<<endl;
	for(i=1;i<=maxm;i++){
		for(j=0;j<vd[i].size();j++){
			cout<<vd[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}