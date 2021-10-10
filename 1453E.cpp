#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+1;
int ans;
vector<int> gr[maxn],res;
int dfs(int u,int p)
{
    if (gr[u].size()==1&&u!=1) return 1;
    //res.clear();
    for (auto v:gr[u])
    {
        if (v==p) continue;
        int r=dfs(v,u);
        res.push_back(r);
    }
    sort(res.begin(),res.end());
    if (res.size()>1)
    {
        if (u==1) ans=max(ans,max(res.back(),res[res.size()-2]+1));
        else ans=max(ans,res.back()+1);
    }
    ans=max(ans,res[0]);
    return res[0]+1;
}

void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) gr[i].clear();
    for (int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    ans=0;
    res.clear();
    dfs(1,0);
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
