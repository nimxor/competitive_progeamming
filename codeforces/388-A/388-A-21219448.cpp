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
#define pi 3.1415926535897932384
#define mod 1000000007

const ll maxi = 1e17;
const int MAXM = 2e3+5;
const int MAXN = 5e5+5; 

int a[101],b[101];
bool visit[101];

int main()
{
	mset(visit,false);
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);
	int ans=0;
	while(true)
	{
		int f=0;
		for(i=0;i<n;i++){
			if(!visit[i]){
				f=1;
			}
		}
		if(!f)	break;
		int x=-1,ff=0,box=0;
		for(i=0;i<n;i++){
			if(!visit[i]){
				if(box<=a[i]){
					visit[i]=1;
					box++;
				}
			}
		}
		ans++;
	}

	cout<<ans<<endl;
	return 0;
}