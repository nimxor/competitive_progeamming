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

int main()
{
	int n,i,j,k,su=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		su+=a[i];
	}

	if(su!=0){
		cout<<"YES\n1\n1 "<<n<<endl;
		return 0;
	}
	su=0;
	for(i=1;i<=n;i++){
		su+=a[i];
		if(su!=0){
			cout<<"YES\n2\n1 "<<i<<endl;
			cout<<i+1<<" "<<n<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}