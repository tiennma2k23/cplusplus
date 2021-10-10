#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=110;
vector<II> gr[maxn];
ll t[maxn],vs[maxn];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<n;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        gr[u+1].push_back(II(v+1,w));
        gr[v+1].push_back(II(u+1,w));
    }
    deque<II> dq;
    dq.push_back(II(1,0));
    while (!dq.empty())
    {
        II u=dq.front();
        vs[u.fi]=true;
        dq.pop_front();
        for (auto v:gr[u.fi]) if (!vs[v.fi])
        {
            vs[v.fi]=true;
            t[v.fi]=t[u.fi]+v.se;
            dq.push_back(v);
        }
    }
    ll ans=-1;
    for (ll i=1;i<=n;i++) ans=max(ans,t[i]);
    cout<<ans<<endl;
}
