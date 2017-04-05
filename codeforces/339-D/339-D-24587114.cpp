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
const int MAXN = 1e6+4;

int a[MAXM],tree[4*MAXM];

void build(int node,int l,int r,int op)
{
	if(l==r){
		tree[node]=a[l];
		return ;
	}
	int mid = (l+r)>>1;
	build(2*node,l,mid,1-op);
	build(2*node+1,mid+1,r,1-op);
	if(op==1){
		tree[node]=(tree[2*node] ^ tree[2*node+1]);
	}else{
		tree[node]=(tree[2*node] | tree[2*node+1]);
	}
}

void update(int node,int l,int r,int idx,int op)
{
	if(idx<l || idx>r || l>r)	return;
	if(l==r && l==idx){
		tree[node]=a[l];
		return ;
	}
	int mid = (l+r)>>1;
	update(2*node,l,mid,idx,1-op);
	update(2*node+1,mid+1,r,idx,1-op);
	if(op==1){
		tree[node]=(tree[2*node] ^ tree[2*node+1]);
	}else{
		tree[node]=(tree[2*node] | tree[2*node+1]);
	}
}

int main()
{
	int n,m,i,j,k;
	scan(n);scan(k);
	for(i=1;i<=(1<<n);i++){
		scan(a[i]);
	}

	bool flag=0;
	if(!(n&1)) flag = 1;
	n=(1<<n);

	build(1,1,n,flag);

	// cout<<tree[1]<<endl;

	while(k--)
	{
		int idx,val;
		scan(idx);
		scan(val);
		a[idx]=val;
		update(1,1,n,idx,flag);
		cout<<tree[1]<<endl;
	}
	return 0;
}