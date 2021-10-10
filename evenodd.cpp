#include<iostream>
using namespace std;
int main()
{
int a,b;
int n,i,ucln;
cin>>n;
for (i=1;i<=n;i++)
    {
        cin>>a;cin>>b;
        if ((a%2!=0)||(b%2!=0)) {cout<<"odd"<<endl;}
        else cout<<"even"<<endl;
    }
}
