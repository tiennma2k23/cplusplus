
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
vector<int> gr[maxn];
int pos[maxn],cnt[maxn],id=0,f[maxn],a[maxn];
void update(int s, int x)
{
    while (s<maxn)
    {
        f[s]+=x;
        s += s&-s;
    }
}

int get(int s)
{
    int x=0;
    while (s>0)
    {
        x+=f[s];
        s-= s&-s;
    }
    return x;
}

void dfs(int u, int p)
{
    id++;
    pos[u] = id;
    cnt[u] = 1;
    for (auto v: gr[u])
    {
        if (v!=p)
        {
            dfs(v,u);
            cnt[u] += cnt[v];
        }
    }
}

int32_t main()
{
    int n,q;
    cin>>n>>q;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs(1,0);
    for (int i=1; i<=n; i++) update(pos[i],a[i]);
    while (q--)
    {
        int tv;
        cin>>tv;
        if (tv==1)
        {
            int s,x;
            cin>>s>>x;
            x-=a[s];
            a[s]+=x;
            update(pos[s],x);
        }
        else
        {
            int x;
            cin>>x;
            int ans=get(pos[x]+cnt[x]-1)-get(pos[x]-1);
            cout<<ans<<endl;
        }
    }
}
