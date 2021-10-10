
#include <bits/stdc++.h>
#define int long long
#define II pair<int,int>
using namespace std;
const int N = 1e6 + 5,inf=-1e9;
int n, k;
pair<int, int> a[N];
vector<int> x;
int dp[N][4];
bool cmp(pair<int, int> a1, pair<int, int> a2)
{
    return a1.second < a2.second;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n, cmp);
    for (int i=0;i<=n;i++) for (int j=0;j<=3;j++) dp[i][j]=inf;
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;

    }
    /*for (int i = 1; i <= n; i++) {
        x[i] = a[i].second;
    }*/
    for (int i = 1; i <= n; i++) {
        dp[i][1] = max(dp[i - 1][1], a[i].second - a[i].first);
        for (int j = 2; j <= k; j++) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            int it = lower_bound(x.begin(), x.end(), a[i].first)-x.begin();
            if (it==0) continue;
            it--;
            dp[i][j] = max(dp[it+1][j - 1] + a[i].second - a[i].first, dp[i][j]);
        }
        x.push_back(a[i].second);
        //cout<<dp[i][k]<<endl;
    }
    if (dp[n][k]<0) cout << -1<<endl;
    else cout << dp[n][k]<<endl;
    return 0;
}
