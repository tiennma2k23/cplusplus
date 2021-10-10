#include<bits/stdc++.h>
#define int long long
#define nk ____nk
using namespace std;
int ans ;
int dp[505][505][15], c[510][510], r[510][510];
const int inf=1e9+1;
bool ck(int i, int j,int n,int m)
{
    return (i >= 1 && i <= n && j >= 1 && j <= m);
}

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    if (k % 2 != 0)
    {
        for (int i=1; i<=n; i++)
            for (int j=1; j<=m; j++) cout << -1 << " ";
        cout << endl;
        return ;
    }
    for (int i=1; i<=n; i++) for (int j=1; j<m; j++) cin >> c[i][j];
    for (int i=1; i<n; i++) for (int j=1; j<=m; j++) cin >> r[i][j];
    for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) for (int nk=1; nk*2<=k; nk++) dp[i][j][nk] = inf;
    for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) dp[i][j][0] = 0;
    for (int nk=1; nk*2<=k; nk++)
    {
        for (int i=1; i<=n; i++) for (int j=1; j<=m; j++)
            {
                int u, v;
                u = i - 1, v = j;
                if (ck(u, v,n,m))
                {
                    dp[i][j][nk] = min(dp[i][j][nk], dp[u][v][nk - 1] + r[u][v]);
                }
                u = i, v = j - 1;
                if (ck(u, v,n,m))
                {
                    dp[i][j][nk] = min(dp[i][j][nk], dp[u][v][nk - 1] + c[u][v]);
                }
            }

        for (int i=n; i>=1; i--) for (int j=m; j>=1; j--)
            {
                int u, v;
                u = i + 1, v = j;
                if (ck(u, v,n,m))
                {
                    dp[i][j][nk] = min(dp[i][j][nk], dp[u][v][nk - 1] + r[i][j]);
                }
                u = i, v = j + 1;
                if (ck(u, v,n,m))
                {
                    dp[i][j][nk] = min(dp[i][j][nk], dp[u][v][nk - 1] + c[i][j]);
                }
            }
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++) cout << dp[i][j][k / 2] * 2 << " ";
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
