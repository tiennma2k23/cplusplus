
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,mod=1e9+7;
int a[maxn],dp[maxn];
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int t=1,ans=1;
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=a[i-1]) dp[i]=t;
        else dp[i]=dp[i-1];
        dp[i]%=mod;
        ans+=dp[i];t+=dp[i];t%=mod;ans%=mod;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    q=1;
    while (q--)
    {
        solve();
    }
}

