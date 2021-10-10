#include<bits/stdc++.h>
using namespace std;
long long int d,a[100000],b[100000],t[100000],y[100000],k[100000],x[100000],n,q,i,j,l;
int main()
{
cin>>n>>q;
for (i=1;i<=n;i++) cin>>a[i];
for (i=1;i<=n;i++) cin>>b[i];
for (i=1;i<=q;i++)
{
    cin>>t[i]>>x[i];
    if (t[i]==1) cin>>y[i]>>k[i];
    else
    {
        d=0;
        for (j=i;j>=1;j--)
        {
            if (t[j]==1)
            {
                if ((x[i]>=y[j])&&((x[i]-y[j]+1)<=k[j])) {cout<<a[x[j]-y[j]+x[i]]<<endl;d=1;break;}
            }
        }
        if (d==0) cout<<b[x[i]]<<endl;
    }
}
}
