#include<iostream>
using namespace std;
int main()
{
long long int n,i,a[10000],c[10000],j,kq=0,t[10000];
cin>>n;
for (i=1;i<=n;i++) cin>>a[i]>>c[i];
for (i=1;i<n;i++)
    for (j=i+1;j<=n;j++)
{
    if (a[i]<a[j]) {swap(a[i],a[j]);swap (c[i],c[j]);}
}
for (i=1;i<n;i++)
    for (j=i+1;j<=n;j++)
{
    if ((a[i]==a[j])&&(c[i]>c[j])) {swap (c[i],c[j]);}
}
for (i=1;i<=n;i++) t[i]=t[i-1]+a[i];
for (i=1;i<=n;i++)
{
    if (a[i]<=t[n]-t[i]) kq=kq+c[i];
    else {kq=kq+c[i];break;}
}
cout<<kq<<endl;
}
