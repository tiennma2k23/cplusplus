#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],max1,max2,i,j,t=0;
cin>>n;
for (i=1;i<=n;i++) cin>>a[i];
for (i=1;i<=n-1;i++)
{
    max1=a[i];max2=a[i+1];
    for (j=i+1;j<=n;j++)
    {
        if (a[j]<max1) {max2=max(max2,a[j]);}
        else {max2=max1;max1=a[j];}
        t=t+max2;
    }
}
cout<<t<<endl;
}
