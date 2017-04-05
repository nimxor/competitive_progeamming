#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e8;
const int MAXM = 1e5+5;
const int MAXN = 1e6+4;

string s;

bool bad(int i){
   if(i-1>=0 and s[i]==s[i-1]) return 1;
   if(i-2>=0 and s[i]==s[i-2]) return 1;
   return 0;
}

int main()
{
	int n,p,i,j,k;
	scan(n);scan(p);
	cin>>s;
	for(i=n-1;i>=0;i--){
		for(j=1;j<=p;j++){
			s[i]++;
			if(s[i]-'a'+1>p)	break;
			
			if(!bad(i)){
				for(k=i+1;k<n;k++){
					s[k]='a';
					int f=0;
					while(bad(k)){
						s[k]+=1;
					}
				}
				cout<<s;
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}