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

const ll inf = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

int a[11];
int b[4]={1,6,8,9};
set<int> s;
int cn=0;
map<int,int> m;

void pre()
{
	do{
		int num=0;
		for(int i=0;i<4;i++){
			num=num*10+b[i];
		}	
		int p = num;	
		num%=7;
		if(s.find(num)==s.end()){
			s.insert(num);
			m[num]=p;
		}
	}while(next_permutation(b,b+4));
}

int main()
{
	pre();

	string s;
	cin>>s;

	int i,j,k;

	int n=s.length();

	for(i=0;i<n;i++){
		a[s[i]-'0']++;
	}

	int num=0;

	for(i=1;i<10;i++){
		if(i==1 or i==6 or i==8 or i==9)	continue;
		if(a[i])
		while(a[i]){
			a[i]--;
			cout<<i;
			num=(num*10+i)%7;
		}
	}

	for(i=1;i<10;i++){
		if(i==1 or i==6 or i==8 or i==9){
			if(a[i]!=1)
			while(a[i]!=1){
				a[i]--;
				cout<<i;
				num=(num*10+i)%7;
			}
		}
	}

	int p = (num*10000)%7;

	cout<<m[(7-p)%7];

	if(a[0])
	while(a[0]){
		a[0]--;
		cout<<"0";
	}

	cout<<endl;

	return 0;
}