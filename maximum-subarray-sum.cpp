#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn],f[maxn];
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    f[1]=a[1];
    int ans=a[1];
    for (int i=2;i<=n;i++)
    {
        f[i]=max(a[i],f[i-1]+a[i]);
        ans=max(ans,f[i]);
    }
    cout<<ans<<endl;
}
