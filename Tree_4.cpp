#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll d[maxn],par[maxn],sz[maxn],vs[maxn];
vector<ll> gr[maxn];
void dfs(ll u)
{
    vs[u]=true;
    for (auto v:gr[u]) if (!vs[v])
    {
        d[v]=d[u]+1;
        par[v]=u;
        dfs(v);
        sz[u]=max(sz[u],sz[v]+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    for (ll i=1;i<n;i++)
        {
            ll u,v;
            cin>>u>>v;
            gr[u].push_back(v);
            gr[v].push_back(u);
        }
    dfs(1);
    ll ans=2*(d[x]+sz[x]);
    ll cnt=0;
    while (x>=2)
    {
        x=par[x];
        cnt++;
        if (cnt>=d[x]) break;
        ans=max(ans,2*(d[x]+sz[x]));
    }
    cout<<ans<<endl;
}
