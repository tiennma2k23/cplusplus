#include<iostream>
using namespace std;
int main()
{
long long n,a[100000],i,j,k,d;
cin>>n;cin>>k;
for (i=1;i<=n;i++) cin>>a[i];
if (k>250000) {cout<<"0"<<endl;}
else
{
    d=0;
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++) {if (a[i]+a[j]*a[j]==k) {d=d+1;}}
    }
cout<<d<<endl;
}
}
