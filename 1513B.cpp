
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,MOD=1e9+7;
int a[maxn];
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    int dem;
    for (int i=0;i<=31;i++)
    {
        dem=0;
        for (int j=1;j<=n;j++) dem+=((a[j]>>i)&1);
        if (dem<n) continue;
        for (int j=1;j<=n;j++) a[j]^=(1<<i);
    }
    dem=0;
    for (int i=1;i<=n;i++) dem+=(a[i]==0);
    int ans=(dem*(dem-1))%MOD;
    for (int i=1;i<=n-2;i++)
    {
        ans=(ans*i)%MOD;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
