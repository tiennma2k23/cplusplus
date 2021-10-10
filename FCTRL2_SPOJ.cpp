#include<iostream>
using namespace std;
int main()
{
int t,n,i;
cin>>t;
while (t--)
{
    cin>>n;
    unsigned long long int gt=1;
    for (i=1;i<=n;i++) gt=gt*i;
    cout<<gt<<endl;
}
}
