#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second

pair<int,int> p[101],q[101];

bool cmp(pair<int,int> l,pair<int,int> r)
{
	return l.fi>l.se;
}

int main()
{
	int n,i,j,k;
	ll sum1=0;

	cin>>n;
	int a[100001]={0},b[100001]={0};
	int x,y,pos=0,neg=0;
	for(i=0;i<n;i++){
		cin>>x>>y;
		if(x<0){
			a[-x]=y;
			neg++;
		}
		else{
			b[x]=y;
			pos++;
		}
	}
	int pp=0,nn=0;
	if(pos>neg)
	{
		for(i=0;i<=100000;i++){
			if(a[i]!=0){
				if(nn==neg)
					break;
				sum1+=a[i];
				nn++;
			}
		}
		for(i=0;i<=100000;i++){
			if(b[i]!=0){
				if(pp==neg+1)
					break;
				sum1+=b[i];
				pp++;
			}
		}
	}
	else if(pos<neg)
	{
		for(i=0;i<=100000;i++){
			if(a[i]!=0){
				if(nn==pos+1)
					break;
				sum1+=a[i];
				nn++;
			}
		}
		for(i=0;i<=100000;i++){
			if(b[i]!=0){
				if(pp==pos)
					break;
				sum1+=b[i];
				pp++;
			}
		}
	}
	else
	{
		for(i=0;i<=100000;i++){
			if(a[i]!=0){
				if(nn==pos)
					break;
				sum1+=a[i];
				nn++;
			}
		}
		for(i=0;i<=100000;i++){
			if(b[i]!=0){
				if(pp==pos)
					break;
				sum1+=b[i];
				pp++;
			}
		}
	}

	cout<<sum1<<endl;

	return 0;
}