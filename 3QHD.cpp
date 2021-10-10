#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,max1,dd,a[10001],vt,vt1,tmp,ans=-1,b[10010],j,kq[10010],dem=0;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    a[0]=0;b[0]=0;
    for (i=1;i<=n;i++)
    {

        for (j=i;j>=0;j--) if (a[j]<a[i]) {b[i]=b[j]+1;break;}
        if (ans<b[i]) {vt=i;ans=b[i];}
    }
    cout<<ans<<endl;
    tmp=ans;
    for (i=vt-1;i>=1;i--)
    {
        if (tmp-b[i]==1) {dem++;kq[dem]=a[i];tmp=b[i];}
    }
    for (i=dem;i>=1;i--) cout<<kq[i]<<" ";
    cout<<a[vt];
}
