#include <bits/stdc++.h>
using namespace std;

const int N = 1 + 1e5;
const int MAXN = 1 + 5e4;
const int INF = 1e9;

int n;
int a[N], dp[N], d[N];

int main() {
#define TASKNAME "cardgame"
  if ( fopen( TASKNAME".inp", "r")) {
    freopen (TASKNAME".inp", "r", stdin);
    freopen (TASKNAME".out", "w", stdout);
  }

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    sort(a+1, a+n+1);
    int m = unique(a+1, a+n+1) - a - 1;
    dp[1] = a[1]*d[a[1]];
    for (int i = 2; i <= m; i++) {
        if ((a[i] - a[i-1]) == 1) dp[i] = max(dp[i-2]+a[i]*d[a[i]], dp[i-1]);
        else dp[i] = dp[i-1] + a[i]*d[a[i]];
    }
    cout << dp[m];
    return 0;
}
