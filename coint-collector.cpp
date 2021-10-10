#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,inf=LLONG_MAX;
int cnt=0,tp[maxn],vs[maxn],sum[maxn],c[maxn];
vector<int> t,in[maxn],out[maxn];
set<int> b[maxn];
void dfs1(int u)
{
    if (vs[u]) return;
    vs[u]=1;
    for (auto v:out[u]) dfs1(v);
    t.push_back(u);
}

void dfs2(int u)
{
    if (vs[u]) return;
    tp[u]=cnt;
    vs[u]=1;
    for (auto v:in[u]) dfs2(v);
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>c[i];
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        out[u].push_back(v);
        in[v].push_back(u);
    }
    memset(vs,0,sizeof(vs));
    for (int i=1;i<=n;i++) if (!vs[i]) dfs1(i);
    memset(vs,0,sizeof(vs));
    reverse(t.begin(),t.end());
    for (auto u:t)
    {
        if (!vs[u])
        {
            cnt++;
            dfs2(u);
        }
    }
    for (int i=1;i<=n;i++)
    {
        sum[tp[i]]+=c[i];
        for (auto j:out[i])
        {
            if (tp[i]!=tp[j]) b[tp[i]].insert(tp[j]);
        }
    }
    vector<int> res;
    memset(vs,0,sizeof(vs));
    reverse(t.begin(),t.end());
    while (!t.empty())
    {
        int u=t.back();
        t.pop_back();
        if (!vs[tp[u]])
        {
            res.push_back(tp[u]);
            vs[tp[u]]=1;
        }
    }
    int ans=-inf;
    while (!res.empty())
    {
        int u=res.back();
        res.pop_back();
        int mx=sum[u];
        for (auto v:b[u]) mx=max(mx,sum[u]+sum[v]);
        sum[u]=mx;
        //ans=max(ans,mx);
    }
    cout<<*max_element(sum+1,sum+cnt+1)<<endl;
}
