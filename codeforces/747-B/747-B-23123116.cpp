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

const int MAXM = 2e5+5;
ll a[MAXM];

int main()
{
	int n,i,j,k;
	string s;
	cin>>n>>s;

	int cn=0,a=0,g=0,c=0,t=0;
	for(i=0;i<n;i++){
		if(s[i]=='?')	cn++;
		else if(s[i]=='A')	a++;
		else if(s[i]=='G')	g++;
		else if(s[i]=='C')	c++;
		else 	t++;
	}

	int maxm=0;

	maxm=max(maxm,max(a,max(g,max(c,t))));

	int ra = maxm-a;
	int rg = maxm-g;
	int rt = maxm-t;
	int rc = maxm-c; 

	int p = 0; 
	p+=maxm-a;
	p+=maxm-g;
	p+=maxm-c;
	p+=maxm-t;

	cn-=p;

	if(cn<0){
		cout<<"===\n";
		return 0;
	}

	if(cn%4==0){
		int pp=0;
		for(i=0;i<n;i++){
			if(s[i]!='?')	continue;
			if(ra){
				s[i]='A';
				ra--;
			}else if(rg){
				rg--;
				s[i]='G';
			}else if(rt){
				rt--;
				s[i]='T';
			}else if(rc){
				rc--;
				s[i]='C';
			}else{
				if(pp==0)	s[i]='A',pp++;
				else if(pp==1)	s[i]='G',pp++;
				else if(pp==2)	s[i]='T',pp++;
				else if(pp==3)	s[i]='C',pp=0;
			}
		}
		cout<<s<<endl;
	}else{
		cout<<"===\n";
		return 0;
	}
	return 0;
}