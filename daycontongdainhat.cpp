#include<iostream>
using namespace std;
int main()
{
    long long int a[10001],sum[10001],i,n,max1=-10000000000000000,j,l,r;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++) if (max1<sum[j]-sum[i-1]) {l=j;r=i;max1=sum[j]-sum[i-1];}
    }
    for (i=r;i<=l;i++) cout<<a[i]<<" ";
}
