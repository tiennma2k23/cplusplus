#include<bits/stdc++.h>
#define ll long long
#define TASK "GSASUKE"
using namespace std;

const ll maxn=1e5+1;

ll h[maxn];
ll dp[maxn];

int main()
{
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    ll n;
    cin>>n;
    for (ll i=1; i<=n; i++) cin>>h[i];
    for (ll i=1; i<=n; i++)
    {
        if (i==1) dp[i]=h[i];
        if (i==2) dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
        else dp[i]=min(dp[i-2]+2*abs(h[i]-h[i-2]),dp[i-1]+abs(h[i]-h[i-1]));
    }
    cout<<dp[n]<<endl;
}
