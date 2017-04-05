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

const int MAXM = 3e2+5;
ll a[MAXM];

int main()
{
	int n,i,j,k,q,t,d;
	cin>>n>>q;	

	while(q--)
	{
		int cn=0;
		cin>>t>>k>>d;
		for(i=1;i<=n;i++){
			if(a[i]<=t)	cn++;
		}

		if(cn<k){
			cout<<"-1\n";
			continue;
		}
		int su=0;

		for(i=1;i<=n;i++){
			if(a[i]<=t){
				if(k==0)	break;
				k--;
				a[i]=t+d;
				su+=i;
			}
		}

		cout<<su<<endl;
	}

	return 0;
}