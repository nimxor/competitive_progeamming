#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e17;
const int MAXM = 1e6+5;
const int MAXN = 1e2+4;
bool valid[MAXM];
int a[MAXN];
map<char,int> m;

int main()    
{
	string s;
	cin>>s;

	int n = s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='!'){
			a[i%4]++;
		}else{
			m[s[i]]=i%4;
		}
	}	

	map<char, int> :: iterator it;
	it = m.find('R');
	if(it != m.end()){
		cout<<a[it->se]<<" ";
	}
	it = m.find('B');
	if(it != m.end()){
		cout<<a[it->se]<<" ";
	}
	it = m.find('Y');
	if(it != m.end()){
		cout<<a[it->se]<<" ";
	}
	it = m.find('G');
	if(it != m.end()){
		cout<<a[it->se]<<" ";
	}

    return 0;
}