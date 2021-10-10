#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+100;
long long a[maxn],b[maxn],c[maxn],d[maxn];
int main()
{
    long long n,i,vt,ans=0;
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++) cin>>b[i];
    for (i=0;i<n;i++) cin>>c[i];
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    for (i=0;i<n;i++)
    {
        vt=upper_bound(c,c+n,b[i])-c;
        d[i]=n-vt;
    }
    for (i=n-2;i>=0;i--) d[i]=d[i+1]+d[i];
    for (i=0;i<n;i++)
    {
        vt=upper_bound(b,b+n,a[i])-b;
        ans=ans+d[vt];
    }
    cout<<ans<<endl;
}
