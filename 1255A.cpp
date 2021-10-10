#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,a1,kq;
cin>>n;
while (n--)
{
    cin>>a>>b;
    a1=abs(a-b);
    kq=(a1/5)+(a1%5)/2+(a1%5)%2;
    cout<<kq<<endl;
}
}
