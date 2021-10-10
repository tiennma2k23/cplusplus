#include <bits/stdc++.h>

#define ii pair <int, int>
#define fi first
#define se second
#define SIZE 100005

using namespace std;

vector <int> A[SIZE];
int N, K, u, v, root, res = 0;
int mark[SIZE], bit[SIZE];

void update1(int u) {
    for (u; u <= N; u += u & -u) ++bit[u];
}

void update2(int u) {
    for (u; u <= N; u += u & -u) --bit[u];
}

int get(int u) {
    int sum = 0;
    for (u; u; u -= u & -u) sum += bit[u];
    return sum;
}

void dfs(int u) {
    for (int i = 0; i < A[u].size(); ++i) {
        int v = A[u][i];
        if (!mark[v]) {
            mark[v] = 1;
            res += get(min(N, v + K)) - get(max(0, v - K - 1));
            update1(v);
            dfs(v);
            update2(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

#endif

    cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        cin >> u >> v;
        A[u].push_back(v);
        A[v].push_back(u);
        mark[v] = 1;
    }

    for (int i = 1; i <= N; ++i)
        if (!mark[i]) root = i;
        else mark[i] = 0;

    update1(root);
    mark[root] = 1;
    dfs(root);
    cout << res;
    return 0;
}
