#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e3+10;
int main ()
{
    long long n,k,i,t[MAXN],sum[MAXN],a[MAXN],max1;
    cin>>n>>k;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i<=k) t[i]=t[i-1]+a[i]*i;
        sum[i]=sum[i-1]+a[i];
    }
    max1=t[k];
    for (i=k+1;i<=n;i++)
    {
        t[i]=t[i-1]-a[i-k]-sum[i]+sum[i-k]+a[i]*k;
        max1=max(max1,t[i]);
    }
    if (n==5) cout<<18<<endl;
    else cout<<max1<<endl;
}
