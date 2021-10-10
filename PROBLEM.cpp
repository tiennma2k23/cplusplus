#include<iostream>
using namespace std;
int main()
{
long long n,a,b,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>a>>b;
        if(a<b)
        {
            if(n-a>=b)
        cout<<0<<" "<<a<<endl;
            else
        cout<<0<<" "<<n-b<<endl;
        }
        else
        {
            if(n-a>=b)
        cout<<a-b<<" "<<a<<endl;
            else
        cout<<a-b<<" "<<n-b<<endl;
        }
    }
}
