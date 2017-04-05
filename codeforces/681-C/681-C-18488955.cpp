#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi 3.1415926535897932384
#define mod 1000000007
const int MAXM =1e6+10;


pair<char , int> ans[MAXM];
int a[MAXM];

// struct compare  
// {  
//    bool operator()(const int& l, const int& r)  
//    {  
//        return l > r;  
//    }  
// };

priority_queue<int> pq;

int main()
{
    int cnt=0;
    int n,i,j,k;
    scanf("%d",&n);
    char s[1001];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(s[0]=='i'){
            scanf("%d",&a[i]);
            pq.push(-a[i]);
            ans[cnt].fi='i';
            ans[cnt++].se=a[i];
        }
        else if(s[0]=='r'){
            if(pq.empty()){
                ans[cnt].fi='i';
                ans[cnt++].se=0;
                pq.push(0);
            }
            if(!pq.empty()){
                ans[cnt++].fi='r';
                pq.pop();
            }
        }
        else{
            cin>>a[i];
            // cout<<"fuck"<<endl;
            if(pq.empty()){
                pq.push(-a[i]);
                ans[cnt].fi='i';
                ans[cnt++].se=a[i];
                ans[cnt].fi='g';
                ans[cnt++].se=a[i];
            }
            else{
                // cout<<"suck"<<endl;
                if((-pq.top())==a[i]){
                    ans[cnt].fi='g';
                    ans[cnt++].se=a[i];
                }
                else{
                    // cout<<"gand"<<endl;
                    // cout<<pq.top()<<endl;
                    while(!pq.empty() && (-pq.top())<a[i]){
                        // cout<<"loda"<<endl;
                        pq.pop();
                        ans[cnt++].fi='r';
                    }
                    if(pq.empty()){
                        pq.push(-a[i]);
                        ans[cnt].fi='i';
                        ans[cnt++].se=a[i];
                    }
                    else{
                        if((-pq.top())!=a[i]){
                            pq.push(-a[i]);
                            ans[cnt].fi='i';
                            ans[cnt++].se=a[i];
                        }
                    }
                    ans[cnt].fi='g';
                    ans[cnt++].se=a[i];
                }
            }
        }
    }

    printf("%d\n",cnt);
    for(i=0;i<cnt;i++)
    {
        if(ans[i].fi=='r'){
            printf("removeMin\n");
        }
        else{
            if(ans[i].fi=='g')
                printf("getMin ");
            else
                printf("insert ");
            printf("%d\n",ans[i].se);
        }
    }
    return 0;
}