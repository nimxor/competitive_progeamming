#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
#define scanl(a) scanf("%lld",&a)
#define scan(a) scanf("%d",&a)

const int MAXM = 2e5+5;
ll a[MAXM];
vector<int> v;
bool visit[MAXM];

int main()
{
	int i,j,k,n,m;
	string s;
	cin>>n>>s;
	n=s.length();
	int d=0,r=0,rr=0,dd=0;
	char ch;
	while(1){
		int c=0;
		rr=0,dd=0;
		for(i=0;i<n;i++){
			if(!visit[i]){
				c++;
				ch=s[i];
				if(s[i]=='R')	rr++;
				else	dd++;
			}
		}

		if(c==1 || rr==0 || dd==0){
			cout<<ch<<endl;
			return 0;
		}

		for(i=0;i<n;i++){
			if(visit[i])	continue;
			if(s[i]=='D'){
				if(d<0){
					visit[i]=1;
					d++;
					continue;
				}
				r--;
			}else{
				if(r<0){
					visit[i]=1;
					r++;
					continue;
				}
				d--;
			}
		}
	}
	return 0;
}