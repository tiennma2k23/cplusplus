#include<bits/stdc++.h>
#define ll long long
#define TASK "TOYS"
using namespace std;
const ll maxn=2e5;
ll a[maxn],dp[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=n;i>=1;i--)
    {
        dp[i]=max({dp[i+2]+a[i],dp[i+4]+a[i]+a[i+1],a[i]+a[i+1]+a[i+2]+dp[i+6]});
    }
    cout<<dp[1]<<endl;
}
