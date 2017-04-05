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
	int n,i,j,k,t;
	string s;
	ll su=0,sut=0;
	cin>>n;
	int f=0;
	for(i=0;i<n;i++){
		cin>>t>>s;
		if(su==0 || su==20000){
			if(s=="East" || s=="West"){
				// cout<<"he"<<endl;
				f=1;
			}
		}
		if(s=="South"){
			su+=t;
		}
		if(s=="North"){
			su-=t;
		}
		if(s=="East"){
			sut+=t;
		}
		if(s=="West"){
			sut-=t;
		}
		if(su<0 || su>20000)	f=1;
	}
	if(su<0 || i!=n || su>0 || f==1){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
	return 0;
}