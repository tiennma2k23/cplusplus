#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
long int a[100000],i,n,j,d=0,min1,max1,k;
cin>>n;
for (i=1;i<=n;i++) cin>>a[i];
for (i=1;i<=n;i++)
{
    for (j=1;j<=n;j++)
    {
        max1=a[i];min1=a[i];
        for (k=1;k<=j-i+1;k++)
        {
            max1=max(max1,a[k]);min1=min(min1,a[k]);
        }
        if (max1-min1+1==j-i+1) {d++;}
    }
}
cout<<d+n;
}
