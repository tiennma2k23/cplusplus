#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
int ans[110][110];
multiset<int> st[110];
vector<II> v;
vector<int> gr[110];
void solve()
{
    int m,n;
    cin>>n>>m;
    v.clear();
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) ans[i][j]=-1;
    for (int i=1;i<=n;i++)
    {
        int b;
        st[i].clear();
        gr[i].clear();
        for (int j=1;j<=m;j++) cin>>b,v.push_back(II(b,i)),st[i].insert(b);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<m;i++)
    {
        auto tmp=v[i];
        gr[tmp.se].push_back(tmp.fi);
        st[tmp.se].erase(st[tmp.se].find(tmp.fi));
    }
    int l=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=l;j<=l+gr[i].size()-1;j++)
        {
            ans[i][j]=gr[i][j-l];
        }
        l+=gr[i].size();
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++) if (ans[i][j]==-1)
        {
            ans[i][j]=*st[i].begin();
            st[i].erase(st[i].begin());
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++) cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
