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
const int MAXM = 1e6+5;
const int MAXN = 2e3+4;
map<char,int> m,mm;
int p = 0;
string s;

bool cal(int x)
{
	m.clear();
	int n = s.length();
	for(int i=0;i<x;i++){
		m[s[i]]++;
	}
	if(m.size()==p){
		return true;
	}
	for(int i=x;i<n;i++){
		m[s[i]]++;
		m[s[i-x]]--;
		if(m[s[i-x]]<=0)	m.erase(s[i-x]);
		if(m.size()==p){
			return true;
		}
	}
	return false;
}

int main()
{
	int n,i,j,k;
	cin>>n>>s;
	for(i=0;i<n;i++){
		mm[s[i]]++;
	}
	i=0;j=0;
	int c=1e8;
	p = mm.size();
	
	for(i=0;i<n;i++){
		m[s[i]]++;
		while(m.size()==p){
			c = min(c,i-j+1);
			if(j<n){
				m[s[j]]--;
				if(m[s[j]]==0){
					m.erase(s[j]);
				}
			}
			j++;
		}
	}

	cout<<c<<endl;
    return 0;
}