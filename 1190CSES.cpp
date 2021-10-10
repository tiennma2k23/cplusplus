#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll minn=-1e9,maxn=2e5+1;

struct nodes {
    ll ans;
    ll pre;
    ll suf;
    ll sum;
};

nodes hop( nodes a, nodes b)
    {
        ll ans=max(max(a.ans,b.ans),a.suf+b.pre);
        ll pre=max(a.pre,a.sum+b.pre);
        ll suf=max(b.suf,a.suf+b.sum);
        ll sum=a.sum+b.sum;
        nodes res={ans,pre,suf,sum};
        return res;
    }

nodes ST[4*maxn];

void update(ll id, ll l, ll r, ll u, ll val)
{
    if (u<l||u>r) return;
    if (l==r)
    {
        ST[id].ans=val;
        ST[id].suf=val;
        ST[id].pre=val;
        ST[id].sum=val;
        return;
    }
    ll mid=(l+r)/2;
    update(id*2,l,mid,u,val);
    update(id*2+1,mid+1,r,u,val);
    ST[id]=hop(ST[id*2],ST[id*2+1]);
}

nodes get(ll id,ll l, ll r, ll u, ll v)
{
    nodes tmp={minn,minn,minn,0};
    if (r<u||v<l) return tmp;
    if (u<=l&&r<=v) return ST[id];
    ll mid=(l+r)/2;
    nodes res=hop(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    for (ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        update(1,1,n,i,a);
    }
    while (q--)
    {
        ll x,y;
        cin>>x>>y;
        update(1,1,n,x,y);
        ll res=get(1,1,n,1,n).ans;
        if (res>0) cout<<res<<endl;
        else cout<<0<<endl;
}
}
