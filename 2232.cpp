#include<iostream>
using namespace std;
int main()
{
    long int mang[1000][1000],i,j,sum[1000],kq,t,n;
    mang[1][1]=1;
for (i=2;i<=31;i++)
{
    for (j=1;j<=i;j++)
        mang[i][j]=mang[i-1][j-1]+mang[i-1][j];
}
for (i=1;i<=31;i++)
{
    sum[i]=0;
    for (j=1;j<=i;j++) sum[i]=sum[i]+mang[i][j];
}
cin>>t;
for (i=1;i<=t;i++)
{
    cin>>n;
    kq=0;
    for (j=1;j<=n;j++) kq=kq+sum[j];
    cout<<kq<<endl;
}
}
