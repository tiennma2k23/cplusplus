#include<bits/stdc++.h>
using namespace std;
 long long n,l,i,k,j,a[510][510],t,max1=-10000000;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) cin>>a[i][j];
    for (i=1;i<=n;i++)
        for (j=i;j<=n;j++)
    {
        t=0;
        for (k=i;k<=j;k++)
            for (l=i;l<=j;l++) t=t+a[k][l];
        max1=max(t,max1);
    }
    cout<<max1<<endl;
}
