#include<bits/stdc++.h>
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

const int MAXM = 1e6+5;
char s[MAXM];

int main()
{
	int i,j,k,n;
	vector<int> v1,v2;
	scanf("%s",s);

	n=strlen(s);

	for(i=0;i<n;i++){
		if(s[i]=='l'){
			v1.pb(i+1);
		}else{
			v2.pb(i+1);
		}
	}

	n = v1.size();

	for(i=0;i<v2.size();i++)	printf("%d\n",v2[i]);
	for(i=0;i<n;i++)	printf("%d\n",v1[n-i-1]);

	
	return 0;
}