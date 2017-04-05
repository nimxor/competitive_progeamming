#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)

const ll maxi = 1e17;
const int MAXM = 1e6+10;

bool valid[MAXM];

void sieve()
{
	mset(valid,true);
	valid[0]=false;
	valid[1]=false;
	for(int i=4;i<MAXM;i+=2){
		valid[i]=false;
	}
	for(int i=3;i*i<MAXM;i+=2){
		if(valid[i]){
			for(int j=i*i;j<MAXM;j+=i){
				if(valid[j]){
					valid[j]=false;
				}
			}
		}
	}

}

int main()    
{
	sieve();
	int n,i=1;
	cin>>n;
	if(n==1){
		cout<<3<<endl;
		return 0;
	}
	while(1)
	{
		int p = n*i+1;
		// cout<<p<<endl;
		if(!valid[p]){
			cout<<i<<endl;
			return 0;
		}
		i++;
	}
    return 0;
}