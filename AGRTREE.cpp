#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1e5+1;
set<ll> st[maxn];
ll c[maxn],goc[maxn],par[maxn];
II v[maxn];
void up(ll u)
{
    st[u].insert(c[u]);
    ll cl=c[u],dd=u;goc[u]=u;
    while (u!=par[u])
    {
        u=par[u];
        st[u].insert(cl);
        goc[dd]=u;
    }
    //st[u].insert(cl);
}

int main()
{
    ll m,n;
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>c[i];
    for (ll i=1;i<=n-1;i++)
    {
        cin>>v[i].fi>>v[i].se;
        if (v[i].fi>v[i].se) swap(v[i].fi,v[i].se);
    }
    sort(v+1,v+1+n);
    goc[1]=1;
    for (ll i=1;i<n;i++)
    {
        if (goc[v[i].fi]==1)
        {
            par[v[i].se]=v[i].fi;
            up(v[i].se);
        }
        else
        {
            par[v[i].fi]=v[i].se;
            up(v[i].fi);
        }
    }
    for (ll i=1;i<=n;i++)
    {
        cout<<st[i].size()<<endl;
        if (st[i].size()==m) cout<<1;
        else cout<<0;
    }

}
