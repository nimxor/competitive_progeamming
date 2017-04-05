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
#define mod 1000000007
#define pii pair<int,int>
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
 
const ll inf = 1e17;
const int MAXM = 2e5+6;
const int MAXN = 2e6+1;

int a[MAXN],has[MAXN],n;
vector<int> v;

int search(int sm,int la)
{
	int lo=0,hi=n-1,ret=-1;
	while(lo<=hi){
		int mid = lo+(hi-lo+1)/2;
		if(v[mid]<=la and v[mid]>=sm){
			ret=mid;
			lo = mid+1;
		}else{
			hi=mid-1;
		}
	}
	return ret;
}

int main()
{
	int i,j,k,x;
	scan(n);
    for(i=0;i<n;i++){
    	scan(x);
    	a[x]=x;
    }
    for(i=2;i<MAXN;i++){
    	if(a[i]==0){
    		a[i]=a[i-1];
    	}
    }
    int maxm=0;
    for(i=2;i<=1000000;i++)
    {
        if(a[i]==i){
        	for(j=2*i-1;j<=2000000;j+=i){
        		maxm=max(maxm,a[j]%i);
        	}
        }
    }
    printf("%d\n",maxm);

	return 0;
}