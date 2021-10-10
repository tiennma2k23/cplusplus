#include<bits/stdc++.h>
#define ll long long
#define TASK "SEQDIV"
using namespace std;
const ll mod=1e9+7;
const ll N=110,K=2e4+1;
ll dp[N][K],ans;
vector<ll> gr[K];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    ll n,k;
    cin>>n>>k;
    for (ll i=1;i<=k;i++)
        for (ll j=i+i;j<=k;j+=i)
        {
            gr[i].push_back(j);
            gr[j].push_back(i);
        }
    for (ll i=1;i<=k;i++) dp[1][i]=1;
    for (ll i=2;i<=n;i++)
        for (ll j=1;j<=k;j++)
            for (auto v:gr[j]) dp[i][j]=dp[i][j]+dp[i-1][v],dp[i][j]%=mod;
    for (ll i=1;i<=k;i++) ans=(ans+dp[n][i])%mod;
    cout<<ans<<endl;
}
