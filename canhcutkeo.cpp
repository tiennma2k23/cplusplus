#include<iostream>
using namespace std;
int main()
{
long long int a[100100],i,n,k,max1,s[100100];
cin>>n>>k;
for (i=1;i<=n;i++) cin>>a[i];
for (i=1;i<=k;i++) s[1]+=a[i];
max1=s[1];
for (i=2;i<=n-k+1;i++)
{
    s[i]=s[i-1]+a[i+k-1]-a[i-1];
    max1=max(max1,s[i]);
}
cout<<max1<<endl;;
}
