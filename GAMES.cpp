#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=1e5+1,INF=LLONG_MAX;

struct Data
{
    ll lazy;
    ll val;
} ST[maxn*4];

void down(ll id)
{
    if (ST[id].lazy==-1) return;
    ll t=ST[id].lazy;
    ST[id*2].lazy=t;
    ST[id*2].val=t;

    ST[id*2+1].lazy=t;
    ST[id*2+1].val=t;

    ST[id].lazy=-1;
}

void update(ll id,ll l, ll r,ll u, ll v, ll val)
{
    if (u>r||v<l) return;
    if (u<=l&&r<=v)
    {
        ST[id].val=val;
        ST[id].lazy=val;
        return;
    }
    ll mid=(l+r)/2;

    down(id);

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    ST[id].val=max(ST[id*2].val,ST[id*2+1].val);
}

ll get(ll id, ll l, ll r, ll u,ll v)
{
    if (v<l||u>r) return -INF;
    if (u<=l&&r<=v) return ST[id].val;
    ll mid=(l+r)/2;
    down(id);

    return max(get(id*2, l, mid, u, v),get(id*2+1, mid+1, r, u, v));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,m;
    freopen("GAMES.inp","r",stdin);
    freopen("GAMES.out","w",stdout);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        update(1,1,n,i,i,a);
    }
    for (ll i=1;i<=m;i++)
    {
        ll p,l;
        cin>>p>>l;
        ll ans=get(1,1,n,p,p+l-1)+1;
        cout<<ans<<endl;
        update(1,1,n,p,p+l-1,ans);
    }
}
