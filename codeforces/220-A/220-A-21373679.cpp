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
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 1e1+5; 
const double pi = acos(-1.0);

int a[MAXM],b[MAXM];
vector<pair<int,int> > vp;
bool visit[MAXM];

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);

	int cn=0;
	for(i=1;i<=n;i++){
		if(a[i]!=b[i]){
			cn++;
		}
	}
	cn<=2 ? cout<<"YES\n" : cout<<"NO\n";
	return 0;
}