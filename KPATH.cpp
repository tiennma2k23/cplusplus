#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
using namespace std;
const ll maxn=110;
ll len,gt;
vector<II> gr[maxn],par[maxn];
ll dd[maxn],d[maxn],k;
void DFS(ll u,ll p,ll w)
{
    if (dd[p]+1>k) return;
    dd[u]=dd[p]+1;
    d[u]=d[p]+w;
    dd[u]=dd[p]+1;
    len=dd[u];
    gt=d[u];
    for (auto v:gr[u])
    {
        if (v.first==p) continue;
        DFS(v.first,u,v.second);
    }
}
int main()
{
    freopen("ABC.inp","r",stdin);
    freopen("ABC.out","w",stdout);
    ll n,m,maxx=-1;
    cin>>n>>m>>k;
    for (ll i=1;i<=m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        gr[u].push_back(II(v,w));
        par[u].push_back(II(v,w));
    }
    for (ll u=1;u<=n;u++)
    {
        for (auto v:par[u])
        {
            DFS(v.first,u,v.second);
            if (len==k) maxx=max(maxx,gt);
        }
    }
    cout<<maxx<<endl;
}
