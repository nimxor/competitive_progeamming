#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back

bool visit[11][11];

int main()
{

	int r,c,i,j,k,n,d;
	
	cin>>r>>c>>n>>d;
	
	memset(visit,false,sizeof(visit));
	int x,y;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		visit[x][y]=true;
	}
	
	ll ans=0,cnt=0;
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			for(k=i;k<=r;k++)
			{
				for(int m=j;m<=c;m++)
				{
					cnt=0;
					for(x=i;x<=k;x++)
					{
						for(y=j;y<=m;y++)
						{
							if(visit[x][y])
								cnt++;
						}
					}
					if(cnt>=d)
						ans++;
				}
			}
		}
	}	
		
	cout<<ans<<endl;	
		
	return 0;
	
}