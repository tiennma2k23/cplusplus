#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[200000];
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    if (n%2==1)
    {
        for (i=n;i>=1;i=i-2) cout<<a[i]<<" ";
        for (i=2;i<=n-1;i=i+2) cout<<a[i]<<" ";
    }
    if (n%2==0)
    {
        for (i=n;i>=2;i=i-2) cout<<a[i]<<" ";
        for (i=1;i<=n-1;i=i+2) cout<<a[i]<<" ";
    }
}
