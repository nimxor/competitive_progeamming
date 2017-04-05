#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	char a[1000010],b[1000010];
	scanf("%s",a);
	scanf("%s",b);
	
	int i,j,k1=0,k2=0;
	
	int n1=strlen(a);
	int n2=strlen(b);
	
	//cout<<n1<<" "<<n2<<endl;
	
	for(i=0;i<n1;i++)
	{
		if(a[i]=='0')
		{
			k1++;
		}
		else
			break;
	}
	
	n1-=k1;
	
	for(i=0;i<n2;i++)
	{
		if(b[i]=='0')
		{
			k2++;
		}
		else
			break;
	}
	
	n2-=k2;
	
	//cout<<n1<<" "<<n2<<endl;
	
	int flag=0;
	
	if(n1>n2)
	{
		printf(">");
		return 0;
	}
	else if(n1<n2)
	{
		printf("<");
		return 0;
	}
	else
	{
		for(i=0;i<n1;i++)
		{
			if((a[i+k1]-'0')>(b[i+k2]-'0'))
			{
				flag=1;
				break;
			}
			else if((a[i+k1]-'0')<(b[i+k2]-'0'))
			{
				flag=2;
				break;
			}
			else
				flag=0;
		}
	}
	
	if(flag==1)
	{
		printf(">");
	}
	else if(flag==2)
	{
		printf("<");
	}
	else
		printf("=");
	   
	return 0;
}

/*
0123
111
*/