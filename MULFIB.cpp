#include<iostream>
using namespace std;
int main()
{
//freopen("MULFIB.inp","r",stdin);
//freopen("MULFIB.out","w",stdout);
unsigned long long int i,n,f[1000],d,q,j,k;
cin>>q;
for (i=1;i<=q;i++)
{
    cin>>n;
    d=0;
    f[1]=1;f[2]=1;
    for (j=3;j<=n;j++) f[j]=f[j-1]+f[j-2];
    for (j=1;j<=n;j++)
        for (k=j;k<=n;k++) if (f[k]%f[j]==0) d++;
    cout<<d+1<<endl;
}
}
