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
const int MAXM = 1e6+5;
const int MAXN = 5e2+5; 

ll aa[MAXM],bb[MAXM];
ll a,b,n;

void pre1(string s)
{
	int n=s.length();
	aa[0]=s[0]-'0';
	aa[0]%=a;
	for(int i=1;i<n;i++){
		aa[i]=(aa[i-1]*10)+(s[i]-'0');
		aa[i]%=a;
	}
}

void pre2(string s)
{
	int n=s.length();
	bb[n]=0;
	ll temp=1;
	for(int i=n-1;i>=0;i--){
		bb[i]=bb[i+1]+(s[i]-'0')*temp;
		bb[i]%=b;
		temp=(temp*10)%b;
	}
}

int main()
{
	string s;
	ll i,j,k;
	cin>>s>>a>>b;
	n=s.length();

	pre1(s);
	pre2(s);

	int pos=-1;
	for(i=0;i<n-1;i++){
		if(aa[i]==bb[i+1] && aa[i]==0 && s[i+1]!='0'){
			pos=i;
			break;
		}
	}

	if(pos==-1){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
		string s1 = s.substr(0,pos+1);
		string s2 = s.substr(pos+1);
		cout<<s1<<"\n"<<s2<<endl;
	}
	
	return 0;
}