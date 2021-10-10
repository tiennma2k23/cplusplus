#include<bits/stdc++.h>
#define ll long long
#define TASK "SEQ"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

const ll maxn=1e5+1;
ll ST[4*maxn],a[maxn],b[maxn],h[maxn];

ll ucln(ll a, ll b)
{
    return __gcd(a,b);
}

void build(ll id, ll l, ll r)
{
    if (l==r)
    {
        ST[id]=h[l];
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    ST[id]=ucln(ST[id*2],ST[id*2+1]);
}

ll get(ll id, ll l, ll r,ll u, ll v)
{
    if (u>r||v<l) return 0;
    if (u<=l&&v>=r) return ST[id];
    ll mid=(l+r)/2;
    return ucln(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}
int main()
{
    FastIO
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    ll n,q;
    cin>>n>>q;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (ll i=1;i<=n;i++)
    {
        cin>>b[i];
        h[i]=abs(b[i]-a[i]);
    }
    build (1,1,n);
    while (q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<get(1,1,n,l,r)<<endl;
    }
}
