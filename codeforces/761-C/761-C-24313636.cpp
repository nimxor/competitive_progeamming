#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)

const ll inf = 1e4;
const int MAXM = 1e2+5;
const int MAXN = 1e6+4;

string s[MAXM];
int minmd[MAXM];
int minma[MAXM];
int minms[MAXM];

int main()
{
	for(int i=0;i<MAXM;i++){
		minms[i]=inf;
		minma[i]=inf;
		minmd[i]=inf;
	}
	int n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>s[i];
	}


	for(i=1;i<=n;i++){
		int p = s[i].length();
		for(j=0;j<s[i].length();j++){
			if(s[i][j]>='0' && s[i][j]<='9'){
				minmd[i] = min(minmd[i],min(j,p-j));
			}
			if(s[i][j]>='a' && s[i][j]<='z'){
				minma[i] = min(minma[i],min(j,p-j));
			}
			if(s[i][j]=='#' || s[i][j]=='*' || s[i][j]=='&'){
				minms[i] = min(minms[i],min(j,p-j));
			}
		}
		// cout<<minmd[i]<<" "<<minma[i]<<" "<<minms[i]<<endl;
	}

	int mins=inf,mina=inf,mind=inf,ans=inf;

	// for(i=1;i<=n;i++){
		
	// }

	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			for(k=j+1;k<=n;k++){
				ans = min(ans,minms[i]+minma[j]+minmd[k]);
				ans = min(ans,minms[j]+minma[k]+minmd[i]);
				ans = min(ans,minms[k]+minma[i]+minmd[j]);
				ans = min(ans,minms[i]+minma[k]+minmd[j]);
				ans = min(ans,minms[j]+minma[i]+minmd[k]);
				ans = min(ans,minms[k]+minma[j]+minmd[i]);
			}
		}
	}


	cout<<ans<<endl;
	// cout<<mins<<" "<<mina<<" "<<mind<<endl;
    return 0;
}