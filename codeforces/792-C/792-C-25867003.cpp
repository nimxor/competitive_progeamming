#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
// #define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first
#define pi 3.14159265358979323
 
const ll inf = 1e7;
const int MAXM = 1e5+3;
const int MAXN = 1e3+4;

string s;
int n;
int dp[MAXM][4];
int par[MAXM][4];

// back tarcking a dp[i][j] keeping track of the parent state from which it occurred
// Par[i][j] is basically used to get back the original required string back

int solve(int idx,int su)
{
	if(idx==n){
		if(su==0)	return 0;
		else return n;
	}
	if(dp[idx][su]!=-1)	return dp[idx][su];
	int ret1 = n;
	ret1 = min(ret1,1+solve(idx+1,su));
	ret1 = min(ret1,solve(idx+1,(su+(s[idx]-'0'))%3));
	// if(ret1>=ret2){
	// 	par[idx][su]=2;
	// }else{
	// 	par[idx][su]=1;
	// }
	dp[idx][su]=ret1;
	return ret1;
}

void go(int idx,int mod)
{
	if(idx==n)	return ;
	if((dp[idx][mod]==solve(idx+1,(mod+(s[idx]-'0'))%3))){
		cout<<s[idx];
		go(idx+1,(mod+(s[idx]-'0'))%3);
	}else{
		go(idx+1,mod);
	}
}

int main()
{
	mset(dp,-1);
	int i,j,k;
	cin>>s;
	n = s.length();
	int firstpos=-1,ans=n,has_zero=-1;
	for(i=0;i<n;i++){
		if(s[i]=='0')	has_zero=1;
		else{
				if(solve(i+1,(s[i]-'0')%3)+i<ans){
				ans=solve(i+1,(s[i]-'0')%3)+i;
				firstpos=i;
			}
		}
	}
	if(ans==n){
		if(has_zero==-1){
			cout<<"-1\n";
		}else{
			cout<<"0\n";
		}
		return 0;
	}
	// cout<<firstpos<<endl;
	int mod=(s[firstpos]-'0')%3;
	cout<<s[firstpos];
	go(firstpos+1,mod);
	// for(i=firstpos+1;i<n;i++){
	// 	if(s[i]!=0){
	// 		if(par[i][mod]==2){
	// 			su += s[i];
	// 			mod += s[i]-'0';
	// 			mod%=3;
	// 		}
	// 	}
	// }
	// cout<<su<<endl;
	return 0;
}