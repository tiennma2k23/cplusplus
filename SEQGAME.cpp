#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=1e4+1,inf=1e9;
int a[maxn],f[maxn];
int32_t main()
{
    int n,k;
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i],f[i]=-inf;
    f[0]=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=min(i,k);j++) f[i]=max(f[i],f[i-j]+a[i]);
    }
    int ans=-inf;
    for (int i=0;i<=n;i++) ans=max(ans,f[i]);
    cout<<ans<<endl;
}
