#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF=LLONG_MAX,maxn=1e5+1;
ll tree[maxn*4],a[maxn];
void update( ll id, ll l, ll r, ll u, ll v)
{
    if (v<l||u>r) return;
    if (l==r)
    {
        tree[id]=v;
        return;
    }
    ll mid=(l+r)/2;
    update(id*2,l,mid,u,v);
    update(id*2+1,mid+1,r,u,v);
    tree[id]=max(tree[id*2],tree[id*2+1]);
}
void build (ll id, ll l, ll r)
{
    if (l==r)
    {
        tree[id]=a[l];
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build (id*2+1,mid+1,r);
    tree[id]=max(tree[id*2],tree[id*2+1]);
}
ll get(ll id, ll l ,ll r, ll u,ll v)
{
    if (v<l||u>r) return 0;
    if (u<=l&&r<=v) return tree[id];
    ll mid=(l+r)/2;
    return max(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}
int main()
{
    ll n,k,ans=INF;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    for (ll i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for (ll i=1;i<n;i++)
    {
        a[i]=a[i+1]-a[i];
    }
    build(1,1,n-1);
    n--;
    ll m=n-k;
    for (ll i=m;i<=n;i++)
    {
        ll res=get(1,1,n,i-m+1,i);
        ans=min(ans,res);
    }
    cout<<ans<<endl;
}
