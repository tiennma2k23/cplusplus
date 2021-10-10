
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1;
int a[maxn],t[maxn];
int32_t main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort (a+1,a+1+n);
    for (int i=1;i<=n;i++) t[i]=t[i-1]+a[i];
    int ans=-2;
    for (int i=m;i<=n;i++)
    {
        if(a[i]-a[i-m+1]<=k) ans=t[i]-t[i-m];
    }
    cout<<ans<<endl;
}
