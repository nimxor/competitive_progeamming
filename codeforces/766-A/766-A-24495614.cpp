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
const int MAXM = 2e4+5;
const int MAXN = 1e6+4;
const int SIZE = 2;
const int MSB = 30;

int n1,n2;

int main()
{
	string s1,s2;
	int i,j,k;
	cin>>s1>>s2;
	n1 = s1.length();
	n2 = s2.length();
	if(s1==s2){
		cout<<-1<<endl;
	}else{
		cout<<max(n1,n2)<<endl;
	}
    return 0;
}