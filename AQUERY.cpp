#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define se second
#define fi first
#define val first
#define lazy second
using namespace std;
const ll maxn=1e5+1,inf=-1;
ll n,q;
vector<ll> a(maxn);
vector<II> v(maxn);
ll timkiem(ll l,ll r,ll key)
{
    ll ans=r;
    while (l<=r)
    {
        ll mid=(l+r)/2;
        if (a[mid]==key) ans=mid;
        if (a[mid]<=key) r=mid-1;
        else l=mid+1;
    }
    return ans;
}


vector<II> nodes(4*maxn);
void down(ll id,ll l,ll r)
{
    if (nodes[id].lazy==inf) return;
    ll t = nodes[id].lazy;
    ll mid=(l+r)/2;
    nodes[id*2].lazy = t;
    nodes[id*2].val = t*(mid-l+1);

    nodes[id*2+1].lazy = t;
    nodes[id*2+1].val = t*(r-mid);

    nodes[id].lazy = inf;
}

void update(ll id, ll l, ll r, ll u, ll v, ll val)
{
    if (v < l || r < u)
    {
        return ;
    }
    if (u <= l && r <= v)
    {
        nodes[id].val = val*(r-l+1);
        nodes[id].lazy = val;
        return ;
    }
    ll mid = (l + r) / 2;

    down(id,l,r);

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    nodes[id].val = nodes[id*2].val+nodes[id*2+1].val;
}

ll get(ll id, ll l, ll r, ll u, ll v)
{
    if (v < l || r < u)
    {
        return 0;
    }
    if (u <= l && r <= v)
    {
        return nodes[id].val;
    }
    ll mid = (l + r) / 2;
    down(id,l,r);

    return get(id*2, l, mid, u, v)+ get(id*2+1, mid+1, r, u, v);
}


ll _find(ll r,ll key)
{
    ll l=1,r1=r;
    while (l<=r1)
    {
        ll mid=(l+r1)/2;
        ll val=get(1,1,n,mid,mid);
        if ((r-mid+1)*val-get(1,1,n,mid,r)>key) l=mid+1;
        else r1=mid-1;
    }
    return l;
}

void sol()
{
    for (ll i=1;i<=q;i++)
    {
        ll r,p;
        r=v[i].fi,p=v[i].se;
        ll l=_find(r,p);
        ll val=get(1,1,n,l,l);
        ll c=val*(r-l+1)-get(1,1,n,l,r);
        p-=c;
        ll tmp=p/(r-l+1);
        ll h=p%(r-l+1);
        update(1,1,n,l,r,val+tmp);
        update(1,1,n,l,l+h-1,val+tmp+1);
    }
    for (ll i=1; i<=n; i++) cout<<get(1,1,n,i,i)<<" ";
}

void sub1_3()
{
    for (ll i=1;i<=q;i++)
        {
            ll r,p;
            r=v[i].fi;
            p=v[i].se;
            ll pos=timkiem(1,r,a[r]);
            //cerr<<pos<<endl;
            a[pos]+=p;
        }
        for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    bool kt=true;
    cin>>n>>q;
    for (ll i=1;i<=q;i++) {
                cin>>v[i].fi>>v[i].se;
                if (v[i].se!=1) kt=false;
        }
    if (kt)
    {
        sub1_3();
        return 0;
    }
    sol();
}
