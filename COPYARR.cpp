#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int d=0,a[100000],b[100000],t[100000],y[100000],k[100000],x[100000],n,q,i,j,l;
cin>>n>>q;
for (i=1;i<=n;i++) cin>>a[i];
for (i=1;i<=n;i++) cin>>b[i];
for (i=1;i<=q;i++)
{
    cin>>t[i]>>x[i];
    if (t[i]==1) cin>>y[i]>>k[i];
    else
    {
        for (j=i;j>=1;j--)
            if ((t[j]==1)&&(x[i]>=y[j])&&(x[i]<=y[j]+k[j]-1)) {d=1;l=j;break;}
        if (d==0) cout<<b[x[i]]<<endl;
        else if (d==1) cout<<a[x[l]+x[i]-1]<<endl;
    }
}
}
