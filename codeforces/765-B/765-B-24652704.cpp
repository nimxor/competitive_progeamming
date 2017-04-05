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
#define mod 100000000
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 1e5+6;
const int MAXN = 10+4;

int a[27],visit[27];
map<string,int> m1,m2;

int main()
{
	int n,i,j,k;
	string s;
	cin>>s;
	for(i=0;i<s.length();i++){
		a[s[i]-'a']++;
	}
	for(i=0;i<26;i++){
		if(!a[i]){
			break;
		}
	}
	int f=0;
	for(j=i;j<26;j++){
		if(a[j]){
			f=1;
		}
	}
	for(i=0;i<s.length();i++){
		if(visit[s[i]-'a']==0){
			for(j=0;j<i;j++){
				if(s[j]-'a' > s[i]-'a'){
					f=1;
				}
			}
		}
		visit[s[i]-'a']++;
	}
	if(f)	cout<<"NO\n";
	else	cout<<"YES\n";
	return 0;
}