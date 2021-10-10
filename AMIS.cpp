#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("vao.inp","r",stdin);
    freopen("ra.out","w",stdout);
unsigned long long int i,n,q,j,x,s,a[100500],k,v,y;
cin>>n>>q;
s=0;
for (i=1;i<=n;i++)
{
    cin>>a[i];
}
for (i=1;i<=q;i++)
{
    cin>>k>>x>>y;
    if (k==1)
    {
        cin>>v;
        for (j=x;j<=y;j++) a[j]=a[j]+v;
    }
    else if (k==2)
    {
        cin>>v;
        for (j=x;j<=y;j++) a[j]=a[j]*v;
    }
    else if (k==3)
    {
        cin>>v;
        for (j=x;j<=y;j++) a[j]=v;
    }
    else if (k==4)
    {
        for (j=x;j<=y;j++) s=(s+a[j])%1000000007;

        cout<<s%1000000007<<endl;
        s=0;
    }
}
}
