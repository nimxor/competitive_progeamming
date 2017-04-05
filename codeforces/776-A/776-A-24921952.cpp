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

const ll inf = 1e17;
const int MAXM = 5e5+5;
const int MAXN = 1e6+4;

int a[MAXM];

int main()
{
	int n,i,j,k;
	string s1,s2,s3,s4;
	cin>>s1>>s2;
	cout<<s1<<" "<<s2<<endl;
	scan(n);
	for(i=1;i<=n;i++){
		cin>>s3>>s4;
		if(s3==s1){
			cout<<s4<<" "<<s2<<endl;
			s1 = s4;
		}else if(s3==s2){
			cout<<s1<<" "<<s4<<endl;
			s2 = s4;
		}else if(s4==s1){
			cout<<s1<<" "<<s3<<endl;
			s2 = s3;
		}else{
			cout<<s3<<" "<<s2<<endl;
			s1 = s3;
		}
	}
	return 0;
}