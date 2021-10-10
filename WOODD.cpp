#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100000],i,t,sum=0,s=0,m,k;
    cin>>n>>m;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a+1,a+1+n);
    a[0]=0;
    t=n+1;
    for (i=1;i<=n;i++)
    {
        s=s+(a[i]-a[i-1])*(t-i);
        if (sum-s<m) break;
    }
    s=s-(a[i]-a[i-1])*(t-i);
    k=(sum-s-m)/(t-i);
    cout<<a[i-1]+k<<endl;
}
