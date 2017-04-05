#include<bits/stdc++.h>
using namespace std;
     
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define iter(a,it) for(auto it: a)
#define f(it,o) f(aut(it, (o).begin()); it != (o).end(); ++ it)
#define tr(cont, it) for(typeof(cont.begin()) it = cont.begin(); it != cont.end(); it++)    
#define dbg(x)  cout<< #x << ": " << (x) << endl; 
#define all(o) (o).begin(), (o).end()
#define UNIQUE(c) (c).resize(unique(all(c)) - (c).begin())  // use with vectors
#define present(cont, e) (cont.find(e) != cont.end()) // find for set/map
#define vpresent(cont, e) (find(all(cont),e) != cont.end())  //find for vectors
#define pb push_back
#define mp make_pair
#define sz(x) (x.size())
#define vii vector<pair<int,int>>
#define pii pair<int,int>

int arr[10001];
int cumsum[10001];
void precal()
{
	arr[0]=1;
	cumsum[0]=1;
	for(int i=1;i<10001;i++){
		arr[i]=2*arr[i-1];
		cumsum[i]=cumsum[i-1]+arr[i];
	}
}

int main()
{
	precal();
	ll n;
	cin>>n;
	ll m=n;
	int cnt=0;
	ll pre=0;
	while(m!=0)
	{
		if(m%10==7)
			pre+=arr[cnt];
		cnt++;
		m/=10;
	}

	cout<<pre+cumsum[cnt-1]<<endl;

	return 0;
}