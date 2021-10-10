
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+5,mod=1e9+7;
int a[maxn],b[maxn] ;
bool vs[maxn] ;
vector<int> gr[maxn] ;
void dfs(int u)
{
    vs[u]=1;
    for (auto v:gr[u])
    {
        if (!vs[v]) dfs(v);
    }
}

void solve()
{
    int n;
    cin >> n ;
    for (int i=1; i<=n; i++) gr[i].clear(),vs[i]=false;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++)
    {
        cin>>b[i];
        gr[a[i]].push_back(b[i]) ;
        gr[b[i]].push_back(a[i]) ;
    }
    int tplt = 0 ;
    for (int i=1; i<=n; i++)
    {
        if (!vs[i])
        {
            tplt++;
            dfs(i);
        }
    }
    int ans = 1 ;
    for (int i=1; i<=tplt; i++) ans = (ans * 2) % mod ;
    cout << ans << "\n" ;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
