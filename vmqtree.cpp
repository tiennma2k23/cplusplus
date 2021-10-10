#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=2e5+1;
int depth[maxn],up[maxn][20],f[maxn],f1[maxn];
vector<int> gr[maxn];

void dfs(int u,int p)
{
    depth[u]=depth[p]+1;
    up[u][0]=p;
    f[u]=max(f[u],f[p]+1);
    for (int i=1;i<=18;i++) up[u][i]=up[up[u][i-1]][i-1];
    for (auto v:gr[u])
    {
        if (v==p) continue;
        dfs(v,u);
        f1[u]=max(f1[u],f1[v]+1);
    }
}

int lca(int u,int v)
{
    if (depth[u]<depth[v]) swap(u,v);
    for (int i=18;i>=0;i--)
    {
        if (depth[up[u][i]]>=depth[v]) u=up[u][i];
    }
    if (u==v) return u;
    for (int i=18;i>=0;i--)
    {
        if (up[u][i]!=up[v][i]) u=up[u][i],v=up[v][i];
    }
    return up[u][0];
}

int dist(int u,int v)
{
    return depth[u]+depth[v]-2*depth[lca(u,v)];
}

void solve()
{
    int n;
    scanf("%lld",&n);
    for (int i=1;i<=n;i++) gr[i].clear();
    for (int i=1;i<n;i++)
    {
        int u,v;
        scanf("%lld %lld",&u,&v);
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (int i=1;i<=n;i++) depth[i]=0,f[i]=0,f1[i]=0;
    dfs(1,0);
    int q;
    scanf("%lld",&q);

    while (q--)
    {
        int ans=0;
        int u,v;
        scanf("%lld %lld",&u,&v);
        ans=min(dist(u,lca(u,v)),dist(v,lca(u,v)))+max(f[lca(u,v)],f1[lca(u,v)]);
        /*for (int fl=1;fl<=n;fl++)
        {
            ans=max(ans,min(dist(fl,u),dist(fl,v)));
        }*/
        cout<<lca(u,v)<<" "<<f1[lca(u,v)]<<endl;
        printf("%lld\n",ans);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    int t;
    scanf("%lld",&t);
    while (t--)
    {
        solve();
    }
}
