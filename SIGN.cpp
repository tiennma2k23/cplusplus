#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN = 1 + 1e3;
const int inf = 1 + 1e9;
int f[MAXN][MAXN], n, m, a[MAXN][MAXN], ans;
int main() {
#define TASK "ABC"
    // freopen(TASK ".inp","r",stdin);
    // freopen(TASK ".out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            f[i][j]=inf;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
            f[i][j]=a[i][j];
        }
    }
    ans = inf;
    for (int j = 1; j <= m; ++j) {
        for (int i = 1; i <= n; ++i) {
            f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i][j + 1])) + a[i][j];
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 1; i <=m; ++i) {
        ans = min(ans, f[n][i]);
    }
    cout << ans << endl;
}
