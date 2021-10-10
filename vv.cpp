#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=300;
ll ST[4*maxn];
ll C[maxn][maxn],T[maxn][maxn];
void update(ll id, ll l, ll r, ll i, ll v) {
    if (i < l || r < i) {
        return ;
    }
    if (l == r) {
        ST[id] += v;
        return ;
    }

    ll mid = (l + r) / 2;
    update(id*2, l, mid, i, v);
    update(id*2 + 1, mid+1, r, i, v);
    ST[id] = ST[id*2]+ ST[id*2 + 1];
}

ll get(ll id, ll l, ll r, ll u, ll v) {
    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    ll mid = (l + r) / 2;
    return get(id*2, l, mid, u, v)+ get(id*2 + 1, mid+1, r, u, v);
}

vector<ll> trace(ll u, ll v) {
    vector<ll> path;
    do {
        path.push_back(u);
        u = T[u][v];
    } while (path.back() != v);
    return path;
}

int main()
{
    ll n,m,q;
    cin>>n>>m>>q;
    for (ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        update(1,1,n,i,a);
    }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++) C[i][j] = 1e9,C[i][i] = 0;;

    for (ll i=1;i<=n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
        C[u][v] = C[v][u] = 1;
        T[u][v] = v;
        T[v][u] = u;
    }

    for (ll l=1;l<=n;l++ )
            for (ll i=1;i<=n;i++)
                for (ll j=1;j<=n;j++)
                {
        if (C[i][j] > C[i][l] + C[l][j]) {
            C[i][j] = C[i][l] + C[l][j];
            T[i][j] = T[i][l];
        }
    }
    while (q--)
    {
        ll x;
        cin>>x;
        if (x==0)
        {
            ll u,v,val;
            cin>>u>>v>>val;
            //vector<ll> path;
            auto path = trace(u,v);
            path.push_back(1);
            for (ll j:path) update(1,1,n,j,val);
        }
        else
        {
            ll u,v;
            cin>>u>>v;
            auto path = trace(u,v);
            ll sum=0;
            for (auto j:path)
            {
                ll t=get(1,1,n,1,j)-get(1,1,n,1,j-1);
                ll tmp=min(m,t);
                sum+=tmp;
            }
            cout<<sum<<endl;
        }
    }
}
