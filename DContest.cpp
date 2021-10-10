#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,j,a[100000],b[100000],m,t=0,t1=0,m1;
    cin>>n>>m;
    m1=m;
    for (i=1;i<=n;i++) {cin>>a[i]>>b[i];}//a1[i]=a[i];b1[i]=b[i];}
    for (i=1;i<n;i++)
    for (j=i+1;j<=n;j++) if (a[j]>a[i]) {swap (a[i],a[j]);swap(b[i],b[j]);}
    for (i=1;i<n;i++)
    for (j=i+1;j<=n;j++)
    {
        if (a[i]==a[j])
        {
            if (b[i]>b[j]) swap (b[i],b[j]);
        }
    }
    for (i=1;i<=n;i++)
    {
        if (m>=b[i]) {m=m-b[i];t=t+a[i];}
    }
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++) if (b[i]>b[j]) {swap (a[i],a[j]);swap(b[i],b[j]);}
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
                if (b[i]==b[j])
        {
            if (a[i]<a[j]) swap (a[i],a[j]);
        }
    for (i=1;i<=n;i++) cout<<a[i]<<" "<<b[i]<<endl;
     for (i=1;i<=n;i++)
    {
        if (m1>=b[i]) {m1=m1-b[i];t1=t1+a[i];}
    }
    cout<<max(t,t1)<<endl;
}
