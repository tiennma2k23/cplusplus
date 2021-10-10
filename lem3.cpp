#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=20,INF=1e9+7;
ll n;
ll dp[maxn][1<<(maxn)],a[maxn][maxn];
ll MASK(ll x)
{
    return 1ll<<(x);
}

ll BIT(ll x,ll i)
{
    return ((x)&MASK(i));
}

ll ON(ll x,ll i)
{
    return ((x)|MASK(i));
}

ll solve()
{
    for (ll i=0;i<n;i++)
        for (ll j=0;j<MASK(n);j++) dp[i][j]=INF;
    for (ll i=0;i<n;i++) dp[i][MASK(i)]=0;
    for (ll mask=0;mask<MASK(n);mask++)
        for (ll u=0;u<n;u++)
            for (ll v=0;v<n;v++)
    {
        if (!BIT(mask,v)) dp[v][ON(mask,v)]=min(dp[v][ON(mask,v)],dp[u][mask]+a[u][v]);
    }
    ll ans=INF;
    for (ll i=0;i<n;i++) ans=min(ans,dp[i][MASK(n)-1]);
    //cout<<ans<<end;
    return ans;
}

int main()
{
    cin>>n;
    for (ll i=0;i<n;i++)
        for (ll j=0;j<n;j++)
        cin>>a[i][j];
    cout<<solve()<<endl;;
    return 0;
}
