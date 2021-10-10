#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
int f[maxn],depth[maxn],ans[maxn];
vector<II> gr[maxn];
struct nodes
{
    int u;int v;int w;int id;
    bool ok;
};
bool cmp(nodes a,nodes b)
{
    return a.w<b.w;
}
nodes a[maxn];
struct node
{
    int p;int maxx;
};
node up[maxn][20];
int get(int u)
{
    if (u!=f[u]) f[u]=get(f[u]);
    return f[u];
}

void dfs(int u,int par,int uv)
{
    depth[u]=depth[par]+1;
    up[u][0].p=par;
    up[u][0].maxx=uv;
    for (int i=1;i<=18;i++)
    {
        up[u][i].p=up[up[u][i-1].p][i-1].p;
        up[u][i].maxx=max(up[up[u][i-1].p][i-1].maxx,up[u][i-1].maxx);
    }
    for (auto v:gr[u])
    {
        if (v.fi!=par) dfs(v.fi,u,v.se);
    }
}

int lca(int u,int v)
{
    if (depth[u]<depth[v]) swap(u,v);
    for (int i=18;i>=0;i--)
    {
        if (depth[up[u][i].p]>=depth[v]) u=up[u][i].p;
    }
    if (u==v) return u;
    for (int i=18;i>=0;i--)
    {
        if (up[u][i].p!=up[v][i].p) u=up[u][i].p,v=up[v][i].p;
    }
    return up[u][0].p;
}

int dist(int u,int v)
{
    return depth[u]+depth[v]-2*depth[lca(u,v)];
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) f[i]=i;
    for (int i=1;i<=m;i++)
    {
        cin>>a[i].u>>a[i].v>>a[i].w;
        a[i].id=i;
    }
    sort(a+1,a+1+m,cmp);
    int cnt=0,res=0;
    for (int i=1;i<=m;i++)
    {
        int uu=get(a[i].u);
        int vv=get(a[i].v);
        if (uu!=vv){

        f[uu]=vv;

        cnt++;
        res+=a[i].w;
        a[i].ok=true;
        gr[a[i].u].push_back(II(a[i].v,a[i].w));
        gr[a[i].v].push_back(II(a[i].u,a[i].w));
        }
        if (cnt==n-1) break;
    }
    dfs(1,0,0);
    for (int i=1;i<=m;i++)
    {
        if (a[i].ok) ans[a[i].id]=res;
        else
        {
            int uu=a[i].u,vv=a[i].v;
            int cha=lca(uu,vv);
            int  ___=0;
            while (uu!=cha)
            {
                int kc=dist(uu,cha);
                int tmp=1,dem=0;
                while (tmp*2<=kc) tmp*=2,dem++;
                ___=max(___,up[uu][dem].maxx);
                uu=up[uu][dem].p;
            }
            uu=vv;
             while (uu!=cha)
            {
                int kc=dist(uu,cha);
                int tmp=1,dem=0;
                while (tmp*2<=kc) tmp*=2,dem++;
                ___=max(___,up[uu][dem].maxx);
                uu=up[uu][dem].p;
            }
            ans[a[i].id]=res+a[i].w-___;
        }

    }
    for (int i=1;i<=m;i++) cout<<ans[i]<<endl;
}
