#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
vector<int> gr[maxn];
#define II pair<int,int>
#define fi first
#define se second
int tp;
bool vs[maxn];

void dfs(int u)
{
    tp++;
    vs[u]=true;
    for (auto v:gr[u]) if (!vs[v]) dfs(v);
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    vector<II> v;
    v.clear();
    int max1=0,max2=0;
    int ans;
    for (int i=1;i<=n;i++)
    {
        if (!vs[i])
        {
            tp=0;
            dfs(i);
            v.push_back(II(tp,i));
            if (i==1) ans=tp;
        }
    }
    sort(v.rbegin(),v.rend());
    if (v.size()==1) cout<<v[0].fi<<endl;
    else if (v[0].se==1) cout<<v[0].fi+v[1].fi<<endl;
    else cout<<v[0].fi+ans<<endl;
}

