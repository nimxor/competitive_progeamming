#pragma GCC optimize("O3")
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
#define mod 10000000019
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 1e6+4;
const int ma = 1e5+5;

int main()
{
	int i,j,k;
	string s;
	cin>>s;
	int n = s.length();
	ll ae=0,ao=0,be=0,bo=0;
	for(i=0;i<n;i++){
		if(i&1){
			if(s[i]=='a'){
				ao++;
			}else{
				bo++;
			}
		}else{
			if(s[i]=='a'){
				ae++;
			}else{
				be++;
			}
		}
	}	
	ll even = ((ao*ae)+(bo*be));
	ll odd = (((ao*(ao-1))/2)+((bo*(bo-1))/2)+((ae*(ae-1))/2)+((be*(be-1))/2));
	cout<<even<<" "<<odd+s.size()<<endl;
	return 0;
}