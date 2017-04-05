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
const int MAXM = 1e3+5;
const int MAXN = 1e1+5; 

int dp[MAXM][MAXM];


int main()
{
	for(int i=0;i<MAXM;i++){
		for(int j=0;j<MAXM;j++){
			dp[i][j]=0;
		}
	}
	int n,k,d,i,j;
	cin>>n>>k>>d;
	int dd=1,ddd=1;
	bool ok=false;
	while(ddd<=d){
		ddd++;
		dd=dd*k;
		if(dd>=n){
			ok=true;
			break;
		}
	}
	if(!ok){
		cout<<-1<<endl;
		return 0;
	}

	for(i=2;i<=n;i++){
		for(j=1;j<=d;j++){
			for(int kk=k-1;kk>=0;kk--){
				dp[j][i]=(dp[j][i-1]+1)%k;
				if(dp[j][i])	break;
			}
			if(dp[j][i])	break;
		}
		for(int jj=j+1;jj<=d;jj++){
			dp[jj][i]=dp[jj][i-1];
		}
	}

	for(i=1;i<=d;i++){
		for(j=1;j<=n;j++){
			cout<<dp[i][j]+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}