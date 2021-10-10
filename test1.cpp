#include<iostream>
using namespace std;
int main()
{
    long long n,max1,sum,i,j;
    long long a[1000000];
cin>>n;
for (i=1;i<=n;i++) cin>>a[i];
max1=a[1];
for (i=1;i<=n;i++)
{
    sum=0;
    if ((n-i+1)%2==0)
    {
    for (j=i;j<=n;j++)
        sum=sum+a[j];
    }
    max1=max(max1,sum);
}
cout<<max1<<endl;
}
