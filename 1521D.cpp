#include<bits/stdc++.h>
#define II pair<int,int>
#define fi first
#define se second
#define IIII pair<II,II>
#define int long long
using namespace std;
const int maxn=1e5+1;
vector<int> gr[maxn];
vector<IIII> res;

int dfs(int u,int p)
{
    int ch=0;
    int to=u;
    for (int v:gr[u])
    {
        if (v==p) continue;
        int x=dfs(v,u);
        if (!x) continue;
        ch++;
        if (ch==1) to=x;
        else if (ch==2)
        {
            res.push_back(IIII(II(p,u),II(to,x)));
            to=0;
        }
        else
        {
            res.push_back(IIII(II(u,v),II(v,x)));
        }
    }
    return to;
}

void solve()
{
    res.clear();
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
    int root=1;

    while (gr[root].size()>1) root++;

    int to=dfs(root,0);

    cout<<res.size()<<endl;

    for (auto val:res)
    {
        cout<<val.fi.fi<<" "<<val.fi.se<<" "<<to<<" "<<val.se.fi<<endl;
        to=val.se.se;
    }

}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
