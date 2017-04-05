// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/explorers-birthday/description/

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
#define scan(a) scanf("%lld",&a)

const int MAXM = 1e2+5;
const int MAXN = 5e1+5;
int visit[MAXM];
vector<int> v[MAXM];
int c=0,lc=1;

int lcm(int a ,int b)
{
	return (a/__gcd(a,b))*b;
}

int f=0;

void dfs(int x,int len,int gpa)
{
	visit[x]=c;
	for(int p : v[x]){
		if(visit[p]==0){
			dfs(p,len+1,gpa);
		}else{
			if(visit[p]==visit[x] && gpa==p){
				len+=1;
				f++;
				// cout<<len<<endl;
				if(!(len&1))	len/=2;
				if(len)
					lc=lcm(lc,len);
			}else{	
				return ;
			}
		}
	}
}

int main()
{
	int n,i,j,k;
	cin>>n;

	for(i=1;i<=n;i++){
		cin>>k;
		if(i==k)	continue;
		v[i].pb(k);
	}

	for(i=1;i<=n;i++){
		if(!visit[i] && v[i].size()!=0){
			c++;
			dfs(i,0,i);
		}
	}

	if(f!=c)	cout<<"-1\n";
	else	cout<<lc<<endl;

   	return 0;
}