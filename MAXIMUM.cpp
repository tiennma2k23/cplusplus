
#include<bits/stdc++.h>
#define ll long long
#define TASK "MAXIMUM"
using namespace std;
const ll maxn=1e5,INF=LLONG_MAX;
ll a[maxn+1];
ll n,q,i;
vector<ll> st[4*maxn+1];
//ifstream fi (TASK ".inp");
//ofstream fo (TASK ".out");
void build(ll id, ll l, ll r) {
    if (l == r) {
        st[id].push_back(a[l]);
        return ;
    }
    ll mid = (l + r) / 2;
    build(id*2, l, mid);
    build(id*2+1, mid+1, r);

    merge(st[id*2].begin(), st[id*2].end(), st[id*2+1].begin(), st[id*2+1].end(), st[id].begin());
}
ll get(ll id,ll l,ll r,ll u,ll v,ll k)
{
    if (v<l||r<u) return INF;
    if (u<=l&&v>=r)
    {
        ll vt=lower_bound(st[id].begin(),st[id].end(),k)-st[id].begin();
        return st[id][vt];
    }
    ll mid=(l+r)/2;
    return min(get(id*2,l,mid,u,v,k),get(id*2+1,mid+1,r,u,v,k));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    cin>>n>>q;
    for (i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while (q--)
    {
        ll  x,y,k;
        cin>>x>>y>>k;
        cout <<get(1,1,n,x,y,k)<<'\n';
    }
}
