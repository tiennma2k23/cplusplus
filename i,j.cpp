#include<iostream>
using namespace std;
int main()
{
long long n,a[100000],i,j,k,d=0,dem,bp[100000],vt[100000];
cin>>n;cin>>k;
for (i=1;i<=n;i++)
{
    cin>>a[i];
    if (a[i]*a[i]<=k)
    {
        d++;
        bp[d]=k-(a[i]*a[i]);
        vt[d]=i;
    }
}
if (k>250000) {cout<<"0"<<endl;}
else
{
    dem=0;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=d;j++) {if ((bp[j]==a[i])&&(vt[j]>=i)) {dem=dem+1;}}
    }
cout<<dem<<endl;
}
}
