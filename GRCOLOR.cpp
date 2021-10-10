#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
int d[maxn],vs[maxn],ans[maxn];
vector<II> v[maxn];
vector<int> gr[maxn];
void bfs(int u)
{
    vs[u]=true;
    deque<int> dq;
    dq.clear();
    dq.push_back(u);
    d[u]=0;
    while (!dq.empty())
    {
        int s=dq.front();
        vs[s]=true;
        dq.pop_front();
        for (auto v:gr[s])
        {
            if (d[v]==-1) d[v]=d[s]+1;
            else d[v]=min(d[v],d[s]+1);
            if (!vs[v]) dq.push_back(v);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++) d[j]=-1,vs[j]=false;
        bfs(i);
        for (int j=1;j<=n;j++)
        {
            if (d[j]!=-1)
            {
                v[i].push_back(II(d[j],j));
            }
        }
        sort(v[i].begin(),v[i].end());
    }
    int q;
    cin>>q;
    while (q--)
    {
        int u,d,c;
        cin>>u>>d>>c;
        //int pos=lower_bound(v[u].begin(),v[u].end(),II(d+1,0));
        for (auto val:v[u])
        {
            if (val.fi>d) break;
            else ans[val.se]=c;
        }
    }
    for (int i=1;i<=n;i++) cout<<ans[i]<<endl;
}
