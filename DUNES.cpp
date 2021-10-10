#include<iostream>
using namespace std;
int main()
{
long int m,n,a[10000],t[10000],l[10000],r[10000],x[10000],i,j;
cin>>n>>m;
for (i=1;i<=n;i++) cin>>l[i]>>r[i]>>x[i];
for (i=1;i<=m;i++)
{
    cin>>a[i];
    for (j=1;j<=n;j++)
    {
        if ((l[j]<=a[i])&&(r[j]>=a[i]))
        {
            if ((a[i]-l[j]+1)%2==1) t[i]=t[i]+x[j];
            else t[i]=t[i]-x[j];
        }
    }
    cout<<t[i]<<endl;
}
}
