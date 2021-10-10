#include<iostream>
using namespace std;
int main()
{
int n,i,t=2;
cin>>n;
for (i=1;i<=n;i++) {t=t+t-1;}
unsigned long long kq=t*t;
cout<<kq<<endl;
}
