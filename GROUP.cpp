#include<bits/stdc++.h>
#define TASK "GROUP"
#define ll long long
#define II pair<ll,ll>
#define se second
#define fi first
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
const ll X=2e15,maxn=1e5+5;

ll b[maxn],vt[maxn],n,k,h,sl;
II ST[4*maxn],a[maxn];
vector<ll> ans;


II add( II a, II b)
{
    return make_pair(a.fi+b.fi,a.se+b.se);
}

void build(ll id, ll l, ll r)
{
    if (l==r)
    {
        ST[id].fi=a[l].fi;
        ST[id].se=1;
        return;
    }
    ll mid=(l+r)/2;
    build (id*2,l,mid);
    build (id*2+1,mid+1,r);
    ST[id]=add(ST[id*2],ST[id*2+1]);
}

void update(ll id,ll l, ll r, ll i)
{
    if (i<l||r<i) return;
    if (l==r)
    {
        ST[id].fi=0;
        ST[id].se=0;
        return;
    }
    ll mid=(l+r)/2;
    update(id*2,l,mid,i);
    update(id*2+1,mid+1,r,i);
    ST[id]=add(ST[id*2],ST[id*2+1]);
}

II get(ll id, ll l, ll r,ll u, ll v)
{
    if (u>r||v<l) return II(0,0);
    if (u<=l&&v>=r) return ST[id];
    ll mid=(l+r)/2;
    return add(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}

bool ck( ll x)
{
    ll vt=upper_bound(b+1,b+1+n,x)-b;
    vt--;
    II tmp=get(1,1,n,1,vt);
    ll t=tmp.fi+(sl-tmp.se)*x;
    if (t>=k*x) return true;
    return false;
}

void binary_s()
{
    ll l=0,r=X;
    while (l<=r)
    {
        ll m=(l+r)/2;
        if (ck(m)) l=m+1;
        else r=m-1;
    }
    ans.push_back(r);
}

int main()
{
    FastIO
    freopen(TASK ".in","r",stdin);
    freopen(TASK ".out","w",stdout);
    ll q;
    cin>>q;
    while (q--)
    {
        cin>>n>>k>>h;
        for (ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            a[i]=II(x,i);
        }
        sort(a+1,a+1+n);
        for (ll i=1;i<=n;i++)
        {
            vt[a[i].se]=i;
            b[i]=a[i].fi;
        }
        build (1,1,n);
        ans.clear();
        for (ll i=n;i>h;i--)
        {
            sl=i;
            binary_s();
            update(1,1,n,vt[i]);
        }
        for (ll i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
