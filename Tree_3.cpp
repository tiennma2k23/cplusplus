#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
vector<ll> gr[maxn];
ll t[maxn],vs[maxn],a[maxn],p[maxn],res[maxn];
int main()
{
    ll n,m;
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<n;i++)
    {
        ll u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    deque<ll> dq;
    dq.push_back(1);
    t[1]=a[1];
    res[1]=a[1];
    while ( !dq.empty() )
    {
        ll u = dq.front();
        dq.pop_front();
        vs[u]=true;
        for (auto v : gr[u])
        {
            if ( !vs[v] )
            {
                res[v]=res[u];
                dq.push_back(v);
                if (a[v]==1)
                {
                    t[v]=t[u]+1;
                }
                res[v]=max(res[v],t[v]);
                vs[v]=true;
            }
        }
    }
    ll ans=0;
    for (ll i=2;i<=n;i++)
    {
        if (gr[i].size()==1) ans+=(res[i]<=m);
        //cout<<max(res[i],t[i])<<endl;
    }

    cout<<ans<<endl;
}
