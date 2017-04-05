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
 
const int MAXM = 1e2+5;
char s[MAXM][MAXM];
bool visit[MAXM][MAXM]; 

int main()
{
	int i,j,k;
	mset(visit,false);
	int n;
	cin>>n;
	mset(s,'.');
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>s[i][j];
		}
	}

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(s[i][j]=='#' && !visit[i][j]){
				if(s[i][j-1]=='#' && s[i][j+1]=='#' && s[i-1][j]=='#' && s[i+1][j]=='#' && !visit[i][j-1] && !visit[i][j+1] && !visit[i-1][j] && !visit[i+1][j]){
					visit[i][j-1]=true;
					visit[i][j+1]=true;
					visit[i][j]=true;
					visit[i-1][j]=true;
					visit[i+1][j]=true;
				}
			}
		}
	}

	bool flag=false;
	for(i=1;i<=n && !flag;i++){
		for(j=1;j<=n && !flag;j++){
			if(s[i][j]=='#' && visit[i][j]==false){
				flag=true;
			}
		}
	}

	if(flag)	cout<<"NO"<<endl;
	else	cout<<"YES"<<endl;
	return 0;
}