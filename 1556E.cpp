#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,INF=1e18+1;
int n, a[maxn], q, b[maxn], c[maxn], tong[maxn];
struct data
{
    int minn, maxx, pref, suf, tong;
};
data st[4*maxn+1];
data _max(data l, data r)
{
    data res;
    res.minn = min(l.minn, r.minn);
    res.pref = max(l.pref, l.tong + r.pref);
    res.suf = max(r.suf, l.suf + r.tong);
    res.maxx = max({l.maxx, r.maxx, l.suf + r.pref});
    res.tong = l.tong + r.tong;
    return res;
}

void build(int id, int l, int r)
{
    if(l == r)
    {
        int k = max(0ll, c[l]);
        st[id] = {tong[l], k, k, k, c[l]};
        return;
    }
    int mid = l + r >> 1;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    st[id] = _max(st[id * 2], st[id * 2 + 1]);
}

data get(int id, int l, int r, int u, int v)
{
    if(r < u || v < l) return {INF, -INF, -INF, -INF, 0};
    if(u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return _max(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
}

void solve()
{
    int l, r;
    cin >> l >> r;
    data ans = get(1, 1, n, l, r);
    if(ans.minn < tong[l - 1] || ans.tong != 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans.maxx << endl;
}

int32_t main()
{
    cin >> n >> q;
    for(int i = 1; i <= n; i ++)
    {
        cin >> a[i];
        c[i] -= a[i];
    }
    for(int i = 1; i <= n ; i ++) cin >> b[i], c[i] += b[i];
    for(int i = 1; i <= n ; i ++) tong[i] = tong[i - 1] + c[i];
    build(1, 1, n);
    while(q --)
    {
        solve();
    }
}
