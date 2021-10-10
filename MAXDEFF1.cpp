#include<iostream>
using namespace std;
int main()
{
    int n,dem=0,k,k1,tg,i;
    long long a[1000],hieu[1000];
    cin>>n;
    for (i=1;i<=n;i++) {cin>>a[i];}
    for (i=2;i<=n;i++)
    {
       dem=dem+1;
       hieu[dem]=a[i]-a[i-1];
    }
    long long max1=(hieu[1]+hieu[2]);
    for (i=2;i<=dem-1;i++)
    {
       max1=max(max1,hieu[i]+hieu[i+1]);
    }
    for (i=1;i<=dem;i++) cout<<hieu[i]<<" ";
    cout<<max1<<endl;
}
