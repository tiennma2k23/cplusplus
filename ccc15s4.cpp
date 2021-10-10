#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define IIi pair<II,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e3+1,inf=1e9+1;
vector<IIi> g[maxn];
int d[maxn][maxn];
int32_t main()
{
    int k,m,n;
    cin>>k>>n>>m;
    while (m--)
    {
        int u,v,t,h;
        cin>>u>>v>>t>>h;
        g[u].push_back(IIi(II(t,h),v));
        g[v].push_back(IIi(II(t,h),u));
    }
    int A,B;
    cin>>A>>B;
    memset(d,inf,sizeof(d));
    d[A][0]=0;
    priority_queue<IIi,vector<IIi>,greater<IIi>> q;
    q.push(IIi(II(0ll,0ll),A));
    while (!q.empty())
    {
        int tg=q.top().fi.fi,re=q.top().fi.se,u=q.top().se;
        q.pop();
        if (tg!=d[u][re]) continue;
        for (auto p:g[u])
        {
            int uv=p.fi.fi,h=p.fi.se,v=p.se;
            if (d[v][re+h]>d[u][re]+uv&&re+h<k)
            {
                d[v][re+h]=d[u][re]+uv;
                q.push(IIi(II(d[v][re+h],re+h),v));
            }
        }
    }
    int ans=inf;
    for (int i=0;i<k;i++) ans=min(ans,d[B][i]);
    if (ans!=inf) cout<<ans<<endl;
    else cout<<-1<<endl;
}
