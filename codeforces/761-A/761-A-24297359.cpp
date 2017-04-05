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

const ll inf = 1e17;
const int MAXM = 1e7+5;
const int MAXN = 1e6+4;

int main()
{
	int a,b,i,j,k;
	cin>>a>>b;

	if(a==0 && b==0){
		cout<<"NO\n";
		return 0;
	}

	if(a==1 && b==0){
		cout<<"YES\n";
		return 0;
	}


	if(a==b || a==b-1 || a==b+1){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

    return 0;
}