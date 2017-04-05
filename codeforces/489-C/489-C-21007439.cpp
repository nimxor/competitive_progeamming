#include<bits/stdc++.h>
using namespace std;
#define ll lond lond

int main()
{
	int n,s,i,j,k;
	cin>>n>>s;
	int a[n+1],b[n+1];
	
	int p = n*9;
	if(p<s){
		cout<<-1<<" "<<-1<<endl;
		return 0;
	}
	
	for(i=1;i<=n;i++){
		a[i]=0;
		b[i]=0;	
	}
	if(s==0 && n!=1){
		cout<<-1<<" "<<-1<<endl;
		return 0;
	}
	else if(s==0){
		cout<<"0 0"<<endl;
		return 0;
	}
	
	if(s<=n){
		int ss = s;
		for(i=1;i<=n;i++){
			if(s>=9){
				s-=9;
				a[i]=9;
			}else{
				a[i]=s;
				s=0;
			}
			
		}
		ss-=1;
		b[1]=1;
		for(i=n;i>=1;i--){
			if(ss>=9){
				ss-=9;
				b[i]=9;
			}else{
				b[i]+=ss;
				ss=0;
			}
		}
		for(i=1;i<=n;i++){
			cout<<b[i];
		}
		cout<<" ";
		for(i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}else{
		int ss = s,f=0;
		for(i=1;i<=n;i++){
			if(s==0){
				f=1;
				break;
			}
			if(s>=9){
				s-=9;
				a[i]=9;
			}
			else{
				a[i]=s;
				s=0;
			}
		}
		if(f==1)
		{
			b[1]=1;
			ss-=1;
		}
		if(f==1)
		for(i=1;i<=n;i++){
			if(ss>=9){
				b[n-i+1]+=9;
				ss-=9;
			}else{
				b[n-i+1]+=ss;
				ss=0;
			}
		}
		if(f==0){
			for(i=n;i>=1;i--){
				cout<<a[i];
			}
			cout<<" ";
			for(i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<endl;
		}else{
			for(i=1;i<=n;i++){
				cout<<b[i];
			}
			cout<<" ";
			for(i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<endl;
		}		
	}
	
	return 0;
}