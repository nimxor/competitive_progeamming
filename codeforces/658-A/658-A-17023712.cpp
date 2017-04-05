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

int main()
{
	int n,c,i,j,k;
	cin>>n>>c;
	int a[n],b[n],pre[n],suff[n];
	mset(pre,0);mset(suff,0);
	for(i=0;i<n;i++)
		cin>>a[i];

	for(j=0;j<n;j++)
		cin>>b[j];

	for(i=0;i<n;i++)
	{
		if(i==0)
			pre[i]=b[i];
		else
			pre[i]=pre[i-1]+b[i];
	}

	for(i=n-1;i>=0;i--)
	{
		if(i==n-1)
			suff[i]=b[i];
		else
			suff[i]=suff[i+1]+b[i];
	}

	/*for(i=0;i<n;i++)
		cout<<pre[i]<<" ";

	cout<<endl;
	for(i=0;i<n;i++)
		cout<<suff[i]<<" ";

	cout<<endl;*/

	int maxm1=0,maxm2=0;

	for(i=0;i<n;i++)
	{
		maxm1+=max(0,a[i]-c*pre[i]);
		maxm2+=max(0,a[i]-c*suff[i]);
	}

	//cout<<maxm1<<" "<<maxm2<<endl;

	if(maxm1>maxm2)
		cout<<"Limak"<<endl;
	else if(maxm1==maxm2)
		cout<<"Tie"<<endl;
	else
		cout<<"Radewoosh"<<endl;
	return 0;
}