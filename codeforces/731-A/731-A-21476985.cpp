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
 	int n,m,i,j,k;
 	string s;
 	cin>>s;
 	n=s.length();
 	int cn=0;
 	char c = 'a';
 	for(i=0;i<n;i++){
 		int x = ((s[i]-c)+26)%26;
 		int y = 26-x;
 		cn+=min(x,y);
 		c=s[i];
 	}
 	cout<<cn<<endl;
    return 0;
}