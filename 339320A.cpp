#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e5+1;
int vs[maxn],ans[maxn],d[maxn];
vector<II> gr[maxn];
int n;
void bfs()
{
    queue<int> q;
    for(int i=1; i<=n; ++i) if(d[i]==0) q.push(i);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto p:gr[u])
        {
            int v=p.fi,w=p.se;
            d[v]--;
            ans[v]=max(ans[v],ans[u]+w);
            if(d[v]==0) q.push(v);
        }
    }
}

int32_t main()
{
    freopen("timeline.inp","r",stdin);
    freopen("timeline.out","w",stdout);
    int m,c;
    cin>>n>>m>>c;
    for (int i=1; i<=n; i++)
    {
        int s;
        cin>>s;
        ans[i]=s;
    }
    while (c--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        gr[u].push_back(II(v,w));
        d[v]++;
    }
    bfs();
    for (int i=1; i<=n; i++) cout<<ans[i]<<endl;
}
