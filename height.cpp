#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[100000],b[100000],mid,l,r,k;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];b[i]=a[i];
    }
    sort (b+1,b+1+n);
    for (i=1;i<=n;i++)
    {
        k=a[i];
        l=1;r=n;mid=(l+r)/2;
        while (b[r]>=k&&l<r)
        {
            mid=(l+r)/2;
            if (b[mid]>=k) r=mid;
            else l=mid+1;
        }
        cout<<r-1<<" ";
    }

}
