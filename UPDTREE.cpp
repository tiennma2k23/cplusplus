#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define TASK "ABC"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Inp freopen(TASK ".inp","r",stdin);
#define Out freopen(TASK ".out","w",stdout);
using namespace std;
const ll maxn=2e5+5;
ll len[maxn],depth[maxn],len2[maxn],T[maxn][20],a[maxn],b[maxn];
vector <ll> gr[maxn];
void dfs(ll u, ll p)
{
    //len[u]=len[p]+w;
    depth[u]=depth[p]+1;
    T[u][0]=p;
    for (ll i=1;i<=18;i++) T[u][i]=T[T[u][i-1]][i-1];
    for (auto v:gr[u])
    {
        if (v==p) continue;
        dfs(v,u);
    }
}
ll lca(ll u, ll v)
{
    if (depth[u]<depth[v]) swap(u,v);
    for (ll i=17;i>=0;i--) if (depth[T[u][i]]>=depth[v]) u=T[u][i];
    if (u==v) return u;
    for (ll i=17;i>=0;i--) if (T[u][i]!=T[v][i]) u=T[u][i],v=T[v][i];
    return T[u][0];
}

void dfs2(ll u, ll p)
{
    for (auto v:gr[u])
    {
        if (v==p) continue;
        dfs2(v,u);
        b[u]=b[v]+b[u];
    }
}
ll dist(ll u, ll v)
{
    return depth[u]+depth[v]-2*depth[lca(u,v)];
}
int main()
{
    FastIO
    //Inp
    //Out
    ll n,q;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<n;i++)
    {
        ll u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs(1,0);
    cin>>q;
    while (q--)
    {
        ll u,v,x,k;
        cin>>u>>v>>x;
        b[u]+=x;
        b[v]+=x;
        k=lca(u,v);
        b[k]-=x;
        b[T[k][0]]-=x;
    }
    dfs2(1,0);
    for (ll i=1;i<=n;i++) cout<<a[i]+b[i]<<" ";
}
