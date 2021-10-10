
#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 12;
const long long Mod = 1e9 + 7;
const long long oo = 1e18;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

#define fi first
#define se second
#define pb push_back
#define ii pair<int, int>

#define Bit(a, i) (((long long)a>>((int)i - 1))&1)
#define dBit(x) __builtin_popcountll((long long)x)
#define FOR(i, a, b) for (int _ = a, _ = b, i = _; i <= _; i++)
#define FORD(i, a, b) for (int _ = a, _ = b, i = _; i >= _; i--)
#define FIX(n, x) cout << setprecision((int)n) << fixed << x << "\n";

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int ntest, n, m, cnt, ans, tmp;
int vis[N];
vector< ii > g[N];

bool dfs(int u) {
    cnt++;
    for(auto p : g[u]) {
    	int v, c;
    	v = p.fi, c = p.se;

        if(vis[v] == -1) {
        	vis[v] = c ? 1 - vis[u] : vis[u];
            if(!dfs(v)) return false;
        }
        else {
        	if ((c == 0 && vis[v] != vis[u]) || (c == 1 && vis[v] == vis[u]))
        		return false;
        }
    }
    tmp += vis[u];
    return true;
}

main(){
    #define file "abc"
    freopen (file ".inp", "r", stdin);
    freopen (file ".out", "w", stdout);
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> ntest;
    while (ntest--) {
    	cin >> n >> m;

    	ans = 0;
    	FOR(i, 1, n) FOR(k, 0, 1) g[i].clear(), vis[i] = -1;


    	FOR(i, 1, m) {
    		int u, v, nk;
    		string s;
    		cin >> u >> v >> s;
    		if (s != "imposter") {
    			g[u].pb({v, 0});
    			g[v].pb({u, 0});
    		} else {
    			g[u].pb({v, 1});
    			g[v].pb({u, 1});
    		}
    	}

        FOR(i, 1, n) {
        	if(vis[i] != -1) continue;
            cnt = 0;
            tmp = 0;
            vis[i] = 0;
            if(!dfs(i)) {
                ans = -1;
                break;
            }
            ans += max(tmp, cnt - tmp);
        }
        cout << ans << '\n';

    }


}
