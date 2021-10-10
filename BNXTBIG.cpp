#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a[100000],i,j,n,max1=-100000000000,dem,k;
freopen("BNXTBIG.inp","r",stdin);
freopen("BNXTBIG.out","w",stdout);
cin>>n;
for (i=1;i<=n;i++)
    {
        cin>>a[i];max1=max(max1,a[i]);
    }
for (i=1;i<=n;i++)
{
        j=i;dem=0;
        while (j<=n&&dem==0)
        {
            if (a[j]>a[i]) {k=j;dem=1;}
            j++;
        }
        if (dem==0) cout<<0<<" ";
        else cout<<k<<" ";
}
}

