// prime factors in O(n^1/3)
// prime factors of a number of power(10^6) can ony be <=100 

#include<bits/stdc++.h>
using namespace std;

#define fi                    first
#define se                    second
#define ll                    long long
#define all(a)                a.begin(),a.end()
#define rall(a)               a.rbegin(),a.rend()  
#define mod                  1000000007
#define mp                    make_pair
#define pb                    push_back
#define mset(m,v)             memset(m,v,sizeof(m))

const int MAXM = 1e5+3;
int a[MAXM];

int main()
{
	ll n;
	cin>>n;

	if(n==0){
		cout<<"1\n";
		return 0;
	}

	n = n%4;

	if(n==1)	cout<<"8\n";
	else if(n==2)	cout<<"4\n";
	else if(n==3)	cout<<"2\n";
	else 	cout<<"6\n";
	return 0;
}