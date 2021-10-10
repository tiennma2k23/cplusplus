#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;

const int maxn=1e5+1,inf=LLONG_MAX;

int n,m,k;
vector<II> gr[maxn];
int d[maxn];
void dijkstra()
{
    priority_queue<II, vector<II>, greater<II>> pq;
    for (int i=1;i<=n;i++) d[i] = inf;
    d[1]=0;
    pq.push(II(0,1));
    while (pq.size())
    {
        int u=pq.top().se;
        int du=pq.top().fi;
        pq.pop();
        if (du!=d[u]) continue;
        for (auto val:gr[u])
        {
            int v=val.se;
            int uv=val.fi;
            if (d[v]>du+uv)
            {
                d[v]=du+uv;
                pq.push(II(d[v],v));
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m>>k;
    while (m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        gr[u].push_back(II(w, v));
        gr[v].push_back(II(w, u));
    }
    dijkstra();
    int ans=0;
    //for (int i=1;i<=n;i++) cout<<d[i]<<endl;
    while (k--)
    {
        int s,y;
        cin>>s>>y;
        if (d[s]<=y) ans++;
    }
    cout<<ans<<endl;
}
