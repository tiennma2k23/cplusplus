#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1,INF=1e9+1;
ll ST[4*maxn];
void update(ll id, ll l, ll r,ll u, ll val)
{
    if (l>u||r<u) return;
    if (l==r)
    {
        ST[id]=val;
        return;
    }
    ll mid=(l+r)/2;
    update(id*2,l,mid,u,val);
    update(id*2+1,mid+1,r,u,val);
    ST[id]=min(ST[id*2],ST[id*2+1]);
}

ll get(ll id,ll l, ll r, ll u, ll v)
{
    if (l>u||r<v) return INF;
    if (u>=l&&v<=r) return ST[id];
    ll mid=(l+r)/2;
    return min(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,k;
        cin>>n>>k;
        memset(ST,INF,sizeof(ST));
        for (ll i=1;i<=n;i++)
        {
            ll a;
            cin>>a;
            //cerr<<a<<endl;
            update(1,1,n,i,a);
            if (i>=k) cout<<get(1,1,n,i-k+1,i)<<" ";
        }
        cout<<endl;
    }
}
