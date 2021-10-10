#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e5+1;
int rt[maxn][2],sz[maxn][2] ;
vector<II> res;
int get(int i, int t)
{
    return rt[i][t] == i ? i : rt[i][t] = get(rt[i][t], t) ;
}


int32_t main()
{
    int n,m1,m2;
    cin>>n>>m1>>m2;
    for (int i=1; i<=n; i++)
    {
        rt[i][0]=i,rt[i][1]=i ;
        sz[i][0]=1,sz[i][1]=1 ;
    }
    while (m1--)
    {
        int u,v;
        cin>>u>>v;
        u = get(u,0ll);
        v=get(v,0ll) ;
        if (u!=v)
        {
            if (sz[u][0]<sz[v][0]) swap(u,v) ;
            rt[v][0]=u;
            sz[u][0]+=sz[v][0] ;
        }
    }
    while (m2--)
    {
        int u,v;
        cin>>u>>v;
        u = get(u,1ll);
        v=get(v,1ll) ;
        if (u!=v)
        {
            if (sz[u][1]<sz[v][1]) swap(u,v) ;
            rt[v][1]=u;
            sz[u][1]+=sz[v][1] ;
        }
    }
    int ans=0;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i!=j&&get(i,0)!=get(j,0)&&get(i,1)!=get(j,1))
            {
                ans++;
                int u=i,v=j;
                u = get(u,0ll);
                v=get(v,0ll) ;
                if (u!=v)
                {
                    if (sz[u][0]<sz[v][0]) swap(u,v) ;
                    rt[v][0]=u;
                    sz[u][0]+=sz[v][0] ;
                }
                u=i,v=j;
                u = get(u,1ll);
                v=get(v,1ll) ;
                if (u!=v)
                {
                    if (sz[u][1]<sz[v][1]) swap(u,v) ;
                    rt[v][1]=u;
                    sz[u][1]+=sz[v][1] ;
                }
                res.push_back(II(i,j)) ;
            }
        }
    }
    cout<<ans<<endl;
    for (auto val:res) cout<<val.fi<<" "<<val.se<<endl;
}
