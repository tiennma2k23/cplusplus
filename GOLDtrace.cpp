#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e9;
int main()
{
    long long n,l,r,max1,a[100000],b[100000],i,j,vt,dem,t=0;;
    cin>>n>>l>>r;
    for (i=1;i<=n;i++) cin>>a[i];
    i=1;
    t=a[1];
    b[1]=1;
    dem=1;
    while (i+l<=n)
    {
        max1=-MAXN;
        for (j=l;j<=r;j++)
        {
            if (max1<a[j+i])
            {
                vt=i+j;
                max1=a[i+j];
            }
        }
        t=t+max1;
        dem++;
        b[dem]=vt;
        i=vt;
    }
    cout<<t<<" "<<dem<<endl;
    for (i=1;i<=dem;i++) cout<<b[i]<<" ";
}
