#include<bits/stdc++.h>
#define int long long
#define ll long long
using namespace std;
const int maxn=2e5+1;
int n, k ;
int a[maxn] ;
int st[maxn << 2], L[maxn << 2], R[maxn << 2] ;

void build (int id, int l, int r)
{
    L[id] = l ;
    R[id] = r ;
    if (l == r)
    {
        st[id] = a[l] ;
        return ;
    }
    int mid = (l + r) >> 1 ;
    build(id << 1, l, mid) ;
    build(id << 1 | 1, mid + 1, r) ;
    st[id] = __gcd(st[id << 1], st[id << 1 | 1]) ;
}

ll get (int id, int u, int v)
{
    if (v < L[id] || R[id] < u || u > v) return 0ll ;
    if (u <= L[id] && R[id] <= v) return st[id] ;
    return __gcd(get(id << 1, u, v), get(id << 1 | 1, u, v)) ;
}

bool ok (int k)
{
    ll x = -1, cur ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        if (i + k - 1 <= n) cur = get(1, i, i + k - 1) ;
        else cur = __gcd(get(1, i, n), get(1, 1, i + k - 1 - n)) ;
        if (x == -1) x = cur ;
        else
        {
            if (x != cur) return 0 ;
        }
    }
    return 1 ;
}

void solve()
{
    cin >> n ;
    for (int i = 0 ; i <= 4 * n ; ++ i) st[i] = 0 ;
    bool chk = 1 ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        cin >> a[i] ;
        if (i > 1 && a[i] != a[i - 1]) chk = 0 ;
    }
    if (chk)
    {
        cout << 0<<endl;
        return ;
    }
    build(1, 1, n) ;
    int l = 1, r = n - 1, ans = n - 1 ;
    while (l <= r)
    {
        int mid = (l + r) >> 1 ;
        if (ok(mid + 1))
        {
            ans = min(ans, mid) ;
            r = mid - 1 ;
        }
        else l = mid + 1 ;
    }
    cout << ans << endl ;
}
int32_t main()
{
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
