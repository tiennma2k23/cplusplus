#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
#define TASK "SPID"
using namespace std;

const ll maxn=1e5+1;

II p[maxn];
ll n,r,ck[maxn];

void Dapruoi(ll x,ll y)
{
    for (ll j=1; j<=n; j++) if (!ck[j])
        {
            ll d=(x-p[j].fi)*(x-p[j].fi)+(y-p[j].se)*(y-p[j].se);
            if (d<=r*r) ck[j]=1;
        }
}

ll Solve()
{
    ll ans=0;
    for (ll i=1; i<=n; i++) if (ck[i]) ans++;
    return ans;
}

int main()
{
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    ll m;
    cin>>n>>m>>r;
    for (ll i=1; i<=n; i++)
    {
        cin>>p[i].fi>>p[i].se;
    }
    for (ll i=1; i<=m; i++)
    {
        ll x,y;
        cin>>x>>y;
        Dapruoi(x,y);
    }
    cout<<Solve()<<endl;
}
