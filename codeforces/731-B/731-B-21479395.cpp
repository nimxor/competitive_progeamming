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
#define print(i,s) cout<<"Case #"<<i<<": "<<s<<endl

const int MAXM  = 1e5+2;

int main()
{
 	int n,i,j,k;
 	cin>>n;
 	ll su=0,cn=0;
 	int a[n];
 	for(i=0;i<n;i++){
 		cin>>a[i];
 		su+=a[i];
 	}

 	int ff=0,y=0;
 	for(i=0;i<n;i++){
 		if(y==1 && a[i]==0){
 			ff=1;
 			break;
 		}
 		if(y==1){
 			cn+=2;
 			a[i]--;
 		}
 		int x = (a[i]/2)*2;
 		cn+=(x);
 		y = a[i]-x;

 	}	
 	if(y==1){
 		ff=1;
 	}	
 	if(ff)	cout<<"NO"<<endl;
 	else cout<<"YES"<<endl;
    return 0;
}