#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back

struct student{
	int val;
	int x;
	int y;
}s[1000000];

//vector<struct student> v;

/*bool cmp(const pair<int,pair<int,int> > &l,const pair<int,pair<int,int> > &r)
{
	return l.first>r.first;
}*/

bool cmp(struct student l,struct student r)
{
	return l.val>r.val;
}

int main()
{
	
	int n,i,j,k,x;

	cin>>n;
	
	k=0;
	
	for(i=2;i<=2*n;i++)
	{
		for(j=1;j<i;j++)
		{
			cin>>s[k].val;
			s[k].x=i;
			s[k++].y=j;
		}
	}
	
	/*for(i=0;i<v.size();i++)
	{
		cout<<v[i].val<<" "; 
	}*/
	
	sort(s,s+k,cmp);
	
	int d[2*n+1];
	memset(d,0,sizeof(d));
	int l=0;
	
	for(i=0;i<k;i++)
	{
		if(d[s[i].x]==0 && d[s[i].y]==0)
		{
			d[s[i].x]=s[i].y;
			d[s[i].y]=s[i].x;
		}
	}
	
	for(i=1;i<=2*n;i++)
		cout<<d[i]<<" ";
		
	cout<<endl;
	
	//v.clear();
	
	return 0;
}