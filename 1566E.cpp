#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
vector<int> gr[maxn];
int dem[maxn],ok[maxn],con[maxn],them[maxn];
void dfs(int u,int par)
{
    for (auto v:gr[u])
    {
        if (v==par) continue;
        dfs(v,u);
        if (con[v]) dem[u]++;
        if (ok[v]) them[u]--;
    }
    if (!dem[u]) con[u]=1;
    if (dem[u]==them[u]&&dem[u]>0) ok[u]=1;
}

void solve()
{
    int n;
    cin>>n;
    for (int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (int i=1; i<=n; i++)
    {
        ok[i]=0;
        dem[i]=0,con[i]=0,them[i]=gr[i].size()-1;
    }
    them[1]++;
    dfs(1,0);
    int ans=1;
    for (int i=1; i<=n; i++) gr[i].clear();
    for (int i=1; i<=n; i++) ans+=max(0ll,dem[i]-1);
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
