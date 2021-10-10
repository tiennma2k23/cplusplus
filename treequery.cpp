#include<bits/stdc++.h>
#define int long  long
using namespace std;
const int maxn=1e5+1;
int sz[maxn],up[maxn][20],depth[maxn],vs[maxn];
vector<int> gr[maxn];
void dfs(int u,int p)
{
    sz[u]=1;
    for (auto v:gr[u])
    {
        if (v==p) continue;
        dfs(v,u);
        sz[u]+=sz[v];
    }
}

void bfs(int rt)
{
    queue<int> q;
    q.push(rt);
    depth[rt]=1;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        if (!vs[u])
        {
            vs[u]=1;
            for (auto v:gr[u])
            {
                if (v==up[u][0]) continue;
                up[v][0]=u;
                depth[v]=depth[u]+1;
                for (int i=1;i<=18;i++)
                {
                    up[v][i]=up[up[v][i-1]][i-1];
                }
                q.push(v);
            }
        }
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
        if (up[u][i]!=up[v][i])
        {
            u=up[u][i];
            v=up[v][i];
        }
    }
    return up[u][0];
}

int dist(int u,int v)
{
    return (depth[u]+depth[v]-2*depth[lca(u,v)]);
}


int32_t main()
{
    int n,q,rt;
    cin>>n>>q>>rt;
    for (int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs(rt,0);
    bfs(rt);
    while (q--)
    {
        int u,v;
        cin>>u>>v;
        if (u==0) rt=v;
        else
        {
            if (v==rt) cout<<n<<endl;
            else if (lca(v,rt)==v)
            {
                int res=sz[v]+depth[v]-depth[rt]+sz[rt];
                cout<<res<<endl;
            }
            else cout<<sz[v]<<endl;
        }
    }
    //for (int i=1;i<=n;i++) cout<<lca(i,5)<<endl;
}
