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
/*void dfs2(ll u, ll p, ll w)
{
    len2[u]=0;
    for (auto v:gr[u])
    {
        if (v.first!=p) {
        dfs2(v.first,u,v.second);
        len2[u]=max(len2[u],len2[v.first]+v.second);
        }
    }
}*/
ll dist(ll u, ll v)
{
    return depth[u]+depth[v]-2*depth[lca(u,v)];
}
int check(ll a, ll b, ll x, ll y, ll k)
{
    ll ans=LLONG_MAX;
    ll tmp1=dist(a,b);
    ll tmp2=min(dist(a,x)+dist(y,b),dist(a,y)+dist(x,b))+1;
    if (tmp1%2==k%2) ans=tmp1;
    if (tmp2%2==k%2) ans=min(ans,tmp2);
    if (ans<=k) return 1;
    else return 0;
}
int main()
{
    FastIO
    //Inp
    //Out
    ll n,q;
    cin>>n;
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
        ll u,v,x,y,k;
        cin>>x>>y>>u>>v>>k;
        cout<<check(u,v,x,y,k)<<endl;
    }
}
