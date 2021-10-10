#include<bits/stdc++.h>
#define ll long long
using namespace std;
const long long MAXN=1e5+10;
long long a[MAXN];
long long tree[4*MAXN];
void update(ll id, ll l, ll r, ll i, long long val){
    if (i > r || i < l) return;
    if (l == r){
        tree[id] = val;
        return;
    }
    ll mid = (l + r) / 2;
    update(id * 2, l, mid, i, val), update(id * 2 + 1, mid + 1, r, i, val);
    tree[id] = tree[id * 2] + tree[id * 2 + 1];
}

long long get(ll id, ll l, ll r, ll u, ll v){
    if (r < u || v < l) return 0;
    if (u <= l && r <= v) return tree[id];
    ll mid = (l + r) / 2;
    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
}

int main()
{
    #define TASK "BUILDING"
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,i,k,q,x,u,v,tmp,tmp1;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        update(1,1,n,i,abs(a[i]-a[i-1]));
    }
    cin>>q;
    while (q--)
    {
        cin>>x>>u>>v;
        if (x==1)
            {
                a[u]=v;
                update(1,1,n,u,abs(a[u]-a[u-1]));
                update(1,1,n,u+1,abs(a[u+1]-a[u]));
            }
        else
        {
            ll  ans=get(1,1,n,1,v)-get(1,1,n,1,u);
            cout<<ans<<endl;
        }
    }

}
