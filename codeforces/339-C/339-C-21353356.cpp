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

int dp[MAXN][11][MAXM][2];
int a[MAXN],m,f=0;
vector<int> Ans;

bool dfs(int x,int y,int k,vector<int> v,int kk)
{
	if(abs(x)>10)	return false;
	if(k==m+1){
		Ans=v;
		return true;
	}
	// if(dp[x][y][k][kk]!=-1)		return dp[x][y][k][kk];
	bool ans=false;
	if(k&1){
		for(int i=1;i<=10;i++){
			if(a[i]==0)	continue;
			if(y==i)	continue;
			if(x+i<=0)	continue;
			v.pb(i);
			ans |= dfs(x+i,i,k+1,v,1-kk);
			if(ans)	return true;
			v.pop_back();
		}
	}else{
		for(int i=1;i<=10;i++){
			if(a[i]==0)	continue;
			if(y==i)	continue;
			if(x-i>=0)	continue;
			v.pb(i);
			ans |= dfs(x-i,i,k+1,v,1-kk);
			if(ans)	return true;
			v.pop_back();
		}
	}
	// return dp[x][y][k][kk]=ans;
	return ans;
}

int main()
{
	for(int i=0;i<MAXN;i++){
		for(int j=0;j<11;j++){
			for(int k=0;k<MAXM;k++){
				dp[i][j][k][0]=-1;
				dp[i][j][k][1]=-1;
			}
		}
	}
	mset(a,0);
	int i,j,k,n;
	string s;
	cin>>s;
	for(i=0;i<10;i++){
		if(s[i]=='1')	a[i+1]=1;
		else	a[i+1]=0;
	}
	int cn=0;
	cin>>m;
	vector<int> v;
	bool p=false;
	p = dfs(0,0,1,v,1);

	if(p){
		cout<<"YES"<<endl;
		for(i=0;i<Ans.size();i++){
			cout<<Ans[i]<<" ";
		}
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}