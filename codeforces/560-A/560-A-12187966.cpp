#include <iostream>
using namespace std;

int main() 
{
    long long int a,n,i;
    cin>>n;
    int f=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            f=1;
    }
    
    if(f==1)
        cout<<"-1"<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}