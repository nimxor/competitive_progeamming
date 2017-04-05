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
const int MAXM = 1e5+5;
const int MAXN = 1e1+5; 
const double pi = acos(-1.0);

vector<string> v;

void solve(double n)
{
	string s="";
	double xx = n-floor(n);
	ll pp = floor(n);
	xx*=100;
	ll x=xx+0.5;
	if(x!=0){
		while(x!=0){
			int p = x%10;
			s=to_string(p)+s;
			x/=10;
		}
		if(s.length()==1){
			s="0"+s;
		}
		s="."+s;
	}
	if(pp!=0){
		int cn=0;
		while(pp!=0){
			if(cn==3)	s="."+s,cn=0;
			int p =pp%10;
			s=to_string(p)+s;
			pp/=10;
			cn++;
		}
	}else{
		s="0"+s;
	}
	cout<<s<<endl;
}

int main()
{	
	string s,ss="";
	cin>>s;
	int i,j,k,n,m;
	n=s.length();
	int f=0;
	for(i=0;i<n;i++){
		if(s[i]>='a' && s[i]<='z'){
			if(!f)		continue;
			v.pb(ss);
			ss="";
			f=0;
		}else{
			ss+=(s[i]);
			f=1;
		}
	}
	if(f)	v.pb(ss);
	// for(i=0;i<v.size();i++){
	// 	cout<<v[i]<<endl;
	// }

	double afterdec=0.0,beforedec=0.0,xx=0.00;
	for(i=0;i<v.size();i++){
		afterdec=0.0;beforedec=0.00;
		string sp = v[i];
		int nn = sp.length();
		if(sp[nn-3]=='.'){
			// cout<<"he"<<endl;
			double p = 0.0;
			for(j=nn-2;j<nn;j++){
				p = p*10+(sp[j]-'0');
			}
			afterdec+=(p/100.00);
			p=0.00;
			for(j=0;j<nn-3;j++){
				if(sp[j]=='.')	continue;
				p = p*10+(sp[j]-'0');
			}
			beforedec += p;
			xx+=(beforedec+afterdec);
		}else{
			double p=0.00;
			for(j=0;j<nn;j++){
				if(sp[j]=='.')	continue;
				p = p*10+(sp[j]-'0');
			}
			xx+=(p);
		}
		
	}
	solve(xx);
	return 0;
}