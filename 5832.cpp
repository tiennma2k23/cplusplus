#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c;
cin>>a>>b>>c;
if ((a==b&&a==c&&b==c)||(a!=b&&b!=c&&a!=c)) cout<<0<<endl;
else cout<<1<<endl;
}
