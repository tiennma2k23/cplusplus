#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int ans[maxn] ;
set< int > s[maxn] ;
vector< int > g[maxn] ;
void dfs (int u, int p)
{
    for (int v : g[u])
    {
        if (v != p)
        {
            dfs(v, u) ;
            if (s[v].size() > s[u].size()) swap(s[u], s[v]) ;
            for (int c : s[v]) s[u].insert(c) ;
        }
    }
    ans[u] = s[u].size() ;
}

int32_t main()
{
    int n;
    cin >> n ;

    for (int i = 1  ; i < n ; i++)
    {
        int u,v;
        cin >> u >> v ;
        g[u].push_back(v) ;
        g[v].push_back(u) ;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        int c;
        cin >> c ;
        s[i].insert(c) ;
    }
    dfs(1, 0) ;
    for (int i = 1 ; i <= n ; ++ i) cout << ans[i] << " " ;

}
