#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e4 + 2;
ll h[N],T[4*N];
ll c[N],w[N],dp[N],P,Q;
ll n;
int main()
{
    cin >> n >> P >> Q;
    for (ll i = 1; i <= n; i++) cin >> c[i] >> w[i] >> h[i];
    for (ll i = 1; i <= n; i++) // prefix_sum
    {
        w[i] = w[i - 1] + w[i];
        c[i] = c[i - 1] + c[i];
    }
    fill(dp + 1,dp + 1 + n,1e18);
    for (ll i = 1; i <= n; i++)
    {
        ll tmp = 0;
        for (ll j = i - 1; j >= 0; j--)
        {
            tmp = max(tmp,h[j + 1]);
            if (c[i] - c[j] <= P && w[i] - w[j] <= Q) dp[i] = min(dp[i],dp[j] + tmp);
            else break;
        }
    }
    cout << dp[n]<<endl;
}
