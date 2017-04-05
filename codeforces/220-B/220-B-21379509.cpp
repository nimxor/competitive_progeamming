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

const int BLOCK_SIZE=330;
const ll maxi = 1e17;
const int MAXM = 1e5+5;
const int MAXN = 5e5+5; 

int a[MAXM],cnt[MAXM],ans[MAXM],curr_ans=0,n;
struct block{
	int l,r,pos;
} Q[MAXM];

bool cmp(struct block b1,struct block b2)
{
	if(b1.l/BLOCK_SIZE!=b2.l/BLOCK_SIZE){
		return b1.l/BLOCK_SIZE < b2.l/BLOCK_SIZE;
	}
	return b1.r < b2.r;
}

void add(int pos)
{
	if(pos<=n){
		if(pos==cnt[pos]){
			curr_ans--;
		}
		cnt[pos]+=1;
		if(pos==cnt[pos]){
			curr_ans++;
		}
	}
}

void remove(int pos)
{
	if(pos<=n){
		if(pos==cnt[pos]){
			curr_ans--;
		}
		cnt[pos]-=1;
		if(pos==cnt[pos]){
			curr_ans++;
		}
	}
}

int main()
{
	int q,i,j,k,x,y;
	cin>>n>>q;	
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	for(i=0;i<q;i++){
		cin>>Q[i].l>>Q[i].r;
		Q[i].l--;Q[i].r--;
		Q[i].pos=i;
	}

	sort(Q,Q+q,cmp);
	int cur_l=0,cur_r=-1;

	for(i=0;i<q;i++){
		int L = Q[i].l;
		int R = Q[i].r;
		while(cur_r<R){
			cur_r++;
			add(a[cur_r]);
		}
		while(cur_r>R){
			remove(a[cur_r]);
			cur_r--;
		}
		while(cur_l<L){
			remove(a[cur_l]);
			cur_l++;
		}
		while(cur_l>L){
			cur_l--;
			add(a[cur_l]);
		}
		ans[Q[i].pos]=curr_ans;
	}

	for(i=0;i<q;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}