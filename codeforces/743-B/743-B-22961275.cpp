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

const int MAXM = 1e6+5;

int main()
{
	ll n,k,i,j;
	cin>>n>>k;

	ll cn=0;
	while(k%2==0){
		k/=2;
		cn++;
		if(k&1)	break;
	}

	if(!cn)	cout<<"1\n";
	else	cout<<cn+1<<endl;
    return 0;
}