#include<iostream>
using namespace std;
int main()
{
long long sum,i,j,n,max1,dd,dm,k;long long a[1000000];
cin>>n;
for (i=1;i<=n;i++) cin>>a[i];
i=1;max1=a[1]+a[2]+a[3]+a[4];
while (i<=n)
{
    k=1;
    while (k<=n-i+1)
    {
        sum=0;dd=0;dm=0;
    for (j=i;j<=i+k-1;j++)
    {
        sum=sum+a[j];
        if (j%2==1) {dd=dd+1;}
        else {dm=dm+1;}
    }
    if (dm==dd) {max1=max(max1,sum);}
    k++;
}
i++;
}
cout<<max1<<endl;
}
