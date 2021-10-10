#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e4+1,mod=1e9+7,inf=mod+1;
int ans=-1,f[maxn],cnt[maxn],deg[maxn];
vector<int> gr[maxn];
void dfs(int u,int p)
{
    cnt[u]++;
    for (auto v:gr[u])
    {
        if (v==p) continue;
        if (cnt[v]>deg[v])
        {
            if (v==2)
            {
                ans=inf;
                return;
            }
            continue;
        }
        f[v]+=f[u];
        f[v]%=mod;
        dfs(v,u);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        deg[v]++;
    }
    f[1]=1;
    dfs(1,0);
    if (ans==-1)
    {
        cout<<f[2]<<endl;
    }
    else cout<<"inf"<<endl;
}
