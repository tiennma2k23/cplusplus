#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std; typedef long long ll;
const int MAXN = 10 + 1e5;
const ll oo = 1 + 1e18, mod = 7 + 1e9;

int n, deg[MAXN], ans = 0, col[MAXN];
vector < pair < int , int > > g[MAXN];

void dfs(int u, int du, int color){
    int c = 0;
    for (auto x : g[u]){
        int v = x.fi, i = x.se;
        if (v == du) continue;
        ++c;
        if (c == color)c++;
        col[i] = c;
        dfs(v, u, c);
    }
}

int main(){

    cin >> n;
    for (int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        g[u].push_back({v, i});
        g[v].push_back({u, i});
        deg[u]++, deg[v]++;
        ans = max (ans, max (deg[u], deg[v]));
    }

    cout << ans << endl;

    dfs(1, 0, 0);

    for (int i = 1; i < n; i++) cout << col[i] << endl;


    return 0;
}
