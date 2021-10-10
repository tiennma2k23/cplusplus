#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define TASK "ABC"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Inp freopen(TASK ".inp","r",stdin);
#define Out freopen(TASK ".out","w",stdout);
using namespace std;
const ll maxn=2e5+5;
ll len[maxn],depth[maxn],len2[maxn],T[maxn][20];
vector <II> gr[maxn];
void dfs(ll u, ll p, ll w)
{
    len[u]=len[p]+w;
    depth[u]=depth[p]+1;
    T[u][0]=p;
    for (ll i=1;i<=18;i++) T[u][i]=T[T[u][i-1]][i-1];
    for (auto v:gr[u])
    {
        if (v.first!=p) {
        dfs(v.first,u,v.second);
        }
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
void dfs2(ll u, ll p, ll w)
{
    len2[u]=0;
    for (auto v:gr[u])
    {
        if (v.first!=p) {
        dfs2(v.first,u,v.second);
        len2[u]=max(len2[u],len2[v.first]+v.second);
        }
    }
}
ll dist1(ll u, ll v)
{
    return len[u]+len[v]-2*len[lca(u,v)];
}
ll dist2(ll u, ll v, ll x)
{
    return len2[u]+len2[v]+x;
}
ll sol(ll u, ll v, ll x)
{
    ll tmp1=dist1(u,v);
    ll tmp2=dist2(u,v,x);
    //cerr<<tmp1<<" "<<tmp2<<endl;
    return max(tmp1,tmp2);
}
int main()
{
    FastIO
    //Inp
    //Out
    ll n,q;
    cin>>n>>q;
    for(ll i=1; i<=n; i++) gr[i].clear();
    for (ll i=1;i<n;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        gr[u].push_back({v,w});
        gr[v].push_back({u,w});
    }
    dfs(1,0,0);
    dfs2(1,0,0);
    while (q--)
    {
        ll u,x,v;
        cin>>u>>v>>x;
        cout<<sol(u,v,x)<<endl;
    }
}
