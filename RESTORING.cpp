#include<bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=310,oo=1e18;
vector<ii> a[maxn];
ll d[maxn],w[maxn][maxn];
ll n;
void dijkstra(ll x) {
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    for (ll i = 1; i <= n; i++)
        d[i] = oo;
    d[x] = 0;
    pq.push(ii(0, x));

    while (pq.size()) {
        ll u = pq.top().second;
        ll du = pq.top().first;
        pq.pop();
        if (du != d[u])
            continue;

        for (ll i = 0; i < a[u].size(); i++) {
            ll v = a[u][i].second;
            ll uv = a[u][i].first;
            if (d[v] > du + uv) {
                d[v] = du + uv;
                pq.push(ii(d[v], v));
            }
        }
    }
}

ll prim(ll u) {
    ll Sum = 0;
    priority_queue<ii> qu;
    for (ll i = 1; i <= n; i++) d[i] = oo;
    qu.push(ii(0, u));
    d[u] = 0;

    while (qu.size()) {
        ii Pop = qu.top();
        qu.pop();
        ll u = Pop.second, du = -Pop.first;
        if (du != d[u]) continue;
        Sum += d[u];
        d[u] = 0;

        for (ll i = 0; i < a[u].size(); ++i) {
            ii tmp = a[u][i];
            ll v=tmp.se;
            if (d[v] > tmp.fi) {
                d[v] = tmp.fi;
                qu.push(ii(-d[v], v));
            }
        }
    }
    return Sum;
}

int main()
{
    cin>>n;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++)
    {
        cin>>w[i][j];
        if (i!=j) a[i].push_back(ii(w[i][j],i)),a[j].push_back(ii(w[i][j],i));
    }
    for (ll i=1;i<=n;i++)
    {
        dijkstra(i);
        for (ll j=i+1;j<=n;j++)
        {
            if (d[j]!=w[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    ll ans=LLONG_MAX;
    /*for (ll i=1;i<=n;i++)
    {
        ans=min(ans,prim(i));
    }
    cout<<ans<<endl;*/
    cout<<prim(1)<<endl;

}
