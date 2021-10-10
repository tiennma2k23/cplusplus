#include <bits/stdc++.h>
//#define int long long
using namespace std;

const int N = 302;
const int maxn = 1 + 5e4;
const int inf = 0x3f3f3f3f;

int n;
int tg[N][N], a[N][N];
int x[maxn], y[maxn], t[maxn];
int dr[] = {-1, 0, 0, +1};
int dc[] = {0, +1, -1, 0};

void time(int u, int v, int w) {
    if (tg[u][v] == inf) tg[u][v] = w;
    for (int j = 0; j < 4; j++) {
        int k = u + dr[j];
        int h = v + dc[j];
        if (k < 0 || h < 0) continue;
        if (tg[k][h] == inf) tg[k][h] = w;
        else tg[k][h] = min(tg[k][h], w);
    }
}

int main() {
    cin >> n;
    int mat = -inf;
    int mah = mat;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> t[i];
        mat = max(x[i], mat);
        mah = max(y[i], mah);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) if (t[i] > t[j]) {
            swap(t[i], t[j]);
            swap(x[i], x[j]);
            swap(y[i], y[j]);
        }
    }
    memset(tg, inf, sizeof(tg));
    for (int i = 0; i < n; i++) time(x[i], y[i], t[i]);
    memset(a, 0x3f, sizeof(a));
    int ans = inf;
    queue<int> q;
    q.push(0ll);
    q.push(0ll);
    a[0][0] = 0;
    while (!q.empty()) {
        int xx = q.front();
        q.pop();
        int yy = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int u = xx + dr[i];
            int v = yy + dc[i];
            if (u > mat+2 || v > mah+2 || u < 0 || v < 0 || a[u][v] < inf) continue;
            if (a[xx][yy] + 1 < tg[u][v]) {
                a[u][v] = a[xx][yy]+1;
                if (tg[u][v] == inf) ans = min(ans, a[u][v]);
                q.push(u);
                q.push(v);
            }
        }
    }
    if (ans == inf) cout << "-1";
    else cout << ans;
    return 0;
}
