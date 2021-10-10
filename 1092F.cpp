#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
vector<int> gr[maxn];
int dep[maxn],a[maxn],f[maxn];
void dfs1(int u,int p)
{
    f[1]+=a[u]*dep[u];
    for (auto v:gr[u])
    {
        if (v==p) continue;
        dep[v]=dep[u]+1;
        dfs1(v,u);
        a[u]+=a[v];
    }
}

void dfs2(int u,int p)
{
    for (auto v:gr[u])
    {
        if (v==p) continue;
        f[v]=f[u]+a[1]-2*a[v];
        dfs2(v,u);
    }
}

int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs1(1,0);
    dfs2(1,0);
    int ans=0;
    for (int i=1;i<=n;i++) ans=max(ans,f[i]);
    cout<<ans<<endl;
}
