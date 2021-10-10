#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d,max1=-1,x[10000],y[10000],i,j,kq[10000];
    cin>>n;
    for (i=1;i<=n;i++) cin>>x[i]>>y[i];
    for (i=1;i<=n;i++)
    {
        bool kt=true;
        for (j=1;j<=i-1;j++)
        {
            if (x[i]>x[j]&&y[i]>y[j])
            {
                kq[i]=max(kq[i],kq[j]+1);
                kt=false;
            }
        }
        if (kt) kq[i]=1;
        max1=max(max1,kq[i]);
    }
    cout<<max1<<endl;

}
