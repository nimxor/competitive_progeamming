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

const ll inf = 1e17;
const int MAXM = 1e6+5;
const int MAXN = 1e5+4;

char s[MAXM];

struct node {
	int a,b,c;
	node() {
		a=b=c=0;
	}
};

node tree[4*MAXM];
node null = node();

node merge(node A,node B)
{
	node res = A;
	int t = min(A.b,B.c);
	res.a = A.a + B.a + t;
	res.b = A.b + B.b - t;
	res.c = A.c + B.c - t;
	return res;
}

void build(int node,int st,int en)
{
	if(st==en){
		if(s[st]=='(')	tree[node].b=1;
		else	tree[node].c=1;
		return ;
	}
	int mid = (st+en)>>1;
	build(2*node,st,mid);
	build(2*node+1,mid+1,en);
	tree[node] = merge(tree[2*node],tree[2*node+1]);
}

node query(int node ,int st,int en,int qs,int qe)
{
	if(st > en || st > qe || en < qs)	return null;
	if(st >= qs && en <= qe)	return tree[node];
	int mid = (st+en)>>1;
	return merge(query(2*node,st,mid,qs,qe),query(2*node+1,mid+1,en,qs,qe));
}

int main()
{
   scanf("%s",s+1);
   int n=strlen(s+1);
   build(1,1,n);
   int m,l,r;
   scan(m);
   while(m--)
   {
   		scan(l);
   		scan(r);
   		printf("%d\n",2*(query(1,1,n,l,r).a));
   }
   return 0;
}