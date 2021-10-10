#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+1,oo=LLONG_MAX;
int n , m ;
vector< int > g[maxn] , rg[maxn] ;
bool is_inf[maxn] ;
int _time ;
int low[maxn] , num[maxn] , root[maxn] , f[maxn] ;
stack< int > s ;

void visit (int u) {
    low[u] = num[u] = ++_time ;
    s.push(u) ;
    for (int v : g[u]) {
        if (num[v]) {
            low[u] = min(low[u] , num[v]) ;
        }
        else {
            visit(v) ;
            low[u] = min(low[u] , low[v]) ;
        }
    }
    if (low[u] == num[u]) {
        int v = 0 ;
        vector< int > cur ;
        do {
            v = s.top() ;
            s.pop() ;
            num[v] = low[v] = oo ;
            cur.push_back(v) ;
        }   while (v != u) ;
        if (cur.size() > 1) {
            for (int x : cur) is_inf[x] = 1 ;
        }
    }
}

int F(int u) {
    if (f[u] != -2) return f[u] ;
    f[u] = 1 ;
    int cnt = 0 , x ;
    for (int v : rg[u]) {
        x = F(v) ;
        cnt += (x == 1) ;
        if (x == 2) cnt = 2 ;
        if (x == -1) return f[u] = -1 ;
    }
    if (cnt > 1) f[u] = 2 ;
    return f[u] ;
}

void solve() {
    cin >> n >> m ;
    for (int i = 0 ; i <= n ; ++ i) {
        g[i].clear() ; rg[i].clear() ;
        is_inf[i] = 0 ;
        low[i] = num[i] = 0 ;
        f[i] = -2 ;
    }
    for (int i = 1 , u , v ; i <= m ; ++ i) {
        cin >> u >> v ;
        if (u == v) is_inf[u] = 1 ;
        else {
            g[u].push_back(v) ;
            rg[v].push_back(u) ;
        }
    }
    _time = 0 ;
    while (!s.empty()) s.pop() ;
    visit(1) ;
    for (int i = 1 ; i <= n ; ++ i) {
        if (!num[i]) f[i] = 0 ;
        else {
            if (is_inf[i]) f[i] = -1 ;
        }
    }
    for (int i = 1 ; i <= n ; ++ i) cout << F(i) << " " ; cout << endl ;
}
int32_t main() {
	int t;
	cin>>t;
	while (t--) solve();
	return 0;
}
