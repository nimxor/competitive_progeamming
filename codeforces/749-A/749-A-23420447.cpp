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
#define print(a) printf("%d ",a)
#define printl(a) printf("%lld ",a)

const int MAXM = 1e6+5;
int a[MAXM];
vector<int> v;

int main()
{
	int i,j,k;
	int n;
	cin>>n;

	while(n>0){
		if(n==3 || n==2){
			v.pb(n);
			break;
		}
		n-=2;
		v.pb(2);
	}

	cout<<v.size()<<endl;
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" "; 
	}
	return 0;
}