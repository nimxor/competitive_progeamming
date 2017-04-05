#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first

const ll inf = 1e8;
const int MAXM = 1e2+5;
const int MAXN = 1e6+4;

struct Point{
	int a,b,x,y;
};

typedef Point Point;

Point p[4*MAXM];

int minm;

Point change(Point q)
{
	int x = (q.x-q.a),y=(q.y-q.b);
	swap(x,y);
	x*=-1;
	q.x=q.a+x;q.y=q.b+y;
	return q;
}

double dist(Point p1,Point p2)
{
	return (double)sqrt((double)((p1.x-p2.x)*(p1.x-p2.x))+(double)((p1.y-p2.y)*(p1.y-p2.y)));
}

vector<double> v;

bool cmp(Point p1,Point p2){
	if(p1.x!=p2.x)	return false;
	if(p1.y!=p2.y)	return false;
	return true;
}

int check(int st)
{
	Point pp1 = p[st],pp2 = p[st+1],pp3 = p[st+2], pp4 = p[st+3];
	Point p1 = p[st],p2 = p[st+1],p3 = p[st+2], p4 = p[st+3];
	for(int i=1;i<=4;i++){
		p1 = change(p1);
		for(int j=1;j<=4;j++){
			p2 = change(p2);
			for(int k=1;k<=4;k++){
				p3 = change(p3);
				for(int z=1;z<=4;z++){
					// cout<<"***************************"<<endl;
					int cn=0;
					v.clear();
					p4 = change(p4);
					// cout<<p1.x<<" "<<p1.y<<endl;
					// cout<<p2.x<<" "<<p2.y<<endl;
					// cout<<p3.x<<" "<<p3.y<<endl;
					// cout<<p4.x<<" "<<p4.y<<endl;
					v.pb(dist(p1,p2));v.pb(dist(p1,p3));v.pb(dist(p1,p4));
					v.pb(dist(p2,p3));v.pb(dist(p2,p4));v.pb(dist(p3,p4));
					sort(v.begin(),v.end());
					if(v[0]!=v[1] or v[0]!=v[2] or v[0]!=v[3] or v[0]==0)	continue;
					if(v[4]!=v[5])	continue;
					// cout<<"-----------------------------------"<<endl;
					// cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
					// cout<<"-----------------------------------"<<endl;
					cn=(i%4)+(j%4)+(k%4)+(z%4);
					minm=min(minm,cn);
				}
			}
		}
	}
	return minm;
}

int main()
{
	int n,m,i,j,k;
	cin>>n;
	for(i=1;i<=4*n;i++){
		cin>>p[i].x;
		cin>>p[i].y;
		cin>>p[i].a;
		cin>>p[i].b;
	}
	for(i=1;i<=4*n;i+=4){
		minm=100010;
		if(check(i)!=100010)
			cout<<minm<<endl;
		else
			cout<<-1<<endl;
		// break;
	}
	return 0;
}